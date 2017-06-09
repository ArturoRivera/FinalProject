#pragma once
#include <iostream>
#include "account.h"

class user : public account
{
private:
    std::string name;
    
public:
    user(std::string userName);
	~user();
    
};

