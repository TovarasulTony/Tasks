#ifndef INFO_H
#define INFO_H


class Info
{
    public:
        static Info& GetInstance();
        int GetCredentials();

    protected:

    private:
        int mCredentials = 10;
};
/*
inline Info& GetInstance()
{
    static Info instance;
    return instance;
}
*/
inline int Info::GetCredentials()
{
    return mCredentials;
}


#endif // INFO_H
