#include "business.h"



business::business(std::string userName) : account(userName)
{
    setAccountType("Business");
}


business::~business()
{
}
