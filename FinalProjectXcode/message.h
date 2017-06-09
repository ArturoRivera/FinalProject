#pragma once
#include "account.h"
#include <stack>
#include <iostream>

class message
{
public:
    message(std::string bodyOfMessage);
	~message();
    
    std::stack<account *>;
};

