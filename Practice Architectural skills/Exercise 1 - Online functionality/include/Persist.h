#ifndef PERSIST_H
#define PERSIST_H


class Persist
{
    public:
        Persist();
        virtual ~Persist();
        void PersistData(int);

    private:
        virtual void HandlePersistData(int) = 0;
};

#endif // PERSIST_H
