#include "user.h"
using namespace std;


user::user(std::string userName) : account(userName)
{
    
}


user::~user()
{
}

void user::registerUserAccount()
{
    cout << "User registered!" << endl;
}
