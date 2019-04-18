#include "EncryptionMaster.h"

EncryptionMaster::EncryptionMaster()
{
    //ctor
}

EncryptionMaster::~EncryptionMaster()
{
    //dtor
}

int EncryptionMaster::Encrypt(int _message)
{
    return _message + 1;
}

int EncryptionMaster::Decrypt(int _message)
{
    return _message - 1;
}
