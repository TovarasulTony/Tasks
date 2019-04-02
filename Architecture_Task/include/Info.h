#ifndef INFO_H
#define INFO_H


class Info
{
    public:
        static void Instantiate();
        int GetCredentials();

    protected:

    public:
        static Info* instance;

    private:
        int mCredentials = 10;
};

inline int Info::GetCredentials()
{
    return mCredentials;
}


#endif // INFO_H
