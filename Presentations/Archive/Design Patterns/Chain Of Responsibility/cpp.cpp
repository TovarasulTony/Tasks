#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;

int zeroContor;
int sum;

class Request
{
public:
    virtual void doStuff(int _first, int _second) = 0;
};

class RequestAdd: public Request
{
    void doStuff(int _first, int _second) override
    {
        cout<<"RequestAdd: "<<_first + _second<<endl;
    }
};

class RequestMultiply: public Request
{
    void doStuff(int _first, int _second) override
    {
        cout<<"RequestMultiply: "<<_first * _second<<endl;
    }
};

class RequestSubtract: public Request
{
    void doStuff(int _first, int _second) override
    {
        cout<<"RequestSubtract: "<<_first - _second<<endl;
    }
};

class Base
{
  private:
    Base *next;
  public:
    Base()
    {
        next = nullptr;
    }
    void add(Base *_n)
    {
        if (next)
          next->add(_n);
        else
          next = _n;
    }

    virtual void handle(int _x,int _y, Request* _request)
    {
        next->handle(_x,_y,_request);
    }
};

class Handle_RequestMultiply: public Base
{
public:
    void handle(int _x,int _y, Request* _request) override
    {
        if(dynamic_cast<RequestMultiply*>(_request) == nullptr)
        {
            Base::handle(_x,_y,_request);
        }
        else if(_x ==0 || _y == 0)
        {
            _request->doStuff(-1,1);
        }
        else if(_x % _y == 0)
        {
            _request->doStuff(_x,_y * _y);
        }
        else
        {
            Base::handle(_x,_y,_request);
        }
    }
};

class Handle_RequestSubtract: public Base
{
public:
    void handle(int _x,int _y, Request* _request) override
    {
        if(dynamic_cast<RequestSubtract*>(_request) == nullptr)
        {
            Base::handle(_x,_y,_request);
        }
        else if(_x < _y)
        {
            _request->doStuff(_y,_x);
        }
        else
        {
            Base::handle(_x,_y,_request);
        }
    }
};

class Handle_Otherwise: public Base
{
public:
    void handle(int _x,int _y, Request* _request) override
    {
        _request->doStuff(_x,_y);
    }
};

int main()
{
    vector<int> v={2,1,-5,6,0,7,0,-5,2,0,4,-3,4,6,-7,8};

    Base* root = new Handle_RequestMultiply;
    Handle_RequestSubtract handle_2;
    Handle_Otherwise handle_3;

    root->add(&handle_2);
    root->add(&handle_3);

    for(auto i = v.begin(); i != v.end(); ++i)
    {
        Request* request;
        if(rand()%2)
        {
            request = new RequestAdd;
        }
        else if(rand()%2)
        {
            request = new RequestMultiply;
        }
        else
        {
            request = new RequestSubtract;
        }
        root->handle(*i, *(++i), request);
    }

    cout<<sum<<endl<<zeroContor;
    return 0;
}
