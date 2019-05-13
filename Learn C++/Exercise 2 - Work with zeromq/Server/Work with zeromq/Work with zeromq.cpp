#include "pch.h"
#include <iostream>
#include <zmq.h>

using namespace std;

int main()
{
	void* context = zmq_ctx_new();
	void* socket = zmq_socket(context, ZMQ_REP);
	zmq_msg_t message;
	int *p1 = new int, *p2 = new int, *p3 = new int;
	zmq_version(p1, p2, p3);
	cout << endl << *p1 << " " << *p2 << " " << *p3;
	cout<<zmq_bind(socket, "tcp://*:5556");
	int error = zmq_errno();
	/*while (true)
	{
		int flags = 0;
		int size = zmq_msg_recv(&message, socket, flags);
		if (size != -1)
		{
			//cout << message._ << endl;
		}
		//cout << size << " " << message._ << endl;
	}*/
	cout << endl << "Error: " << strerror(error) << endl;
}