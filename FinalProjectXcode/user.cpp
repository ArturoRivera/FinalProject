#include "user.h"
#include "account.h"
using namespace std;


user::user(std::string userName) : account(userName)
{
    setAccountType("User");
}


user::~user()
{
}

