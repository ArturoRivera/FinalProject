#pragma once
#include <iostream>

class sportsTeam
{
private:
    std::string teamName;
    std::string userName;
public:
	sportsTeam();
	~sportsTeam();
    void registerUser();
    void displayUsers();
};

