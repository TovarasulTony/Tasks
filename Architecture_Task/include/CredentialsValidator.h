#ifndef CREDENTIALSVALIDATOR_H
#define CREDENTIALSVALIDATOR_H


class CredentialsValidator
{
    public:
        CredentialsValidator();
        virtual ~CredentialsValidator();
        bool ValidateCredentials(int);

    protected:

    private:
};

#endif // CREDENTIALSVALIDATOR_H
