#ifndef ENCRYPTIONMASTER_H
#define ENCRYPTIONMASTER_H


class EncryptionMaster
{
    public:
        EncryptionMaster();
        virtual ~EncryptionMaster();
        int Encrypt(int);
        int Decrypt(int);
    protected:

    private:
};

#endif // ENCRYPTIONMASTER_H
