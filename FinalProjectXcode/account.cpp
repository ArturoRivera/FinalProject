#include "account.h"



account::account(std::string userName) : _userName(userName)
{
}


account::~account()
{
}

void account::setAccountType(std::string type)
{
	_accountType = type;
}

