#pragma once
#include <iostream>

class user
{
private:
    std::string name;
    int age;
    std::string userName;
    
public:
	user();
	~user();
    void registerUser();
    void displayUsers();
};

