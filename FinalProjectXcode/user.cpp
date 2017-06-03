#include "user.h"
using namespace std;


user::user(std::string userName) : account(userName)
{
    
}


user::~user()
{
}

void user::registerUser()
{
    cout << "User registered!" << endl;
}
