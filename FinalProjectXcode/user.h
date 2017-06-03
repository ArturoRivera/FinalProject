#pragma once
#include <iostream>
#include "account.h"

class user : public account
{
private:
    std::string name;
    int age;
    
    
public:
    user(std::string userName);
	~user();
    void registerUser();
    void displayUsers();
};

