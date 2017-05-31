#pragma once
#include <iostream>
#include "account.h"

class sportsTeam : public account
{
private:
    std::string teamName;
	std::string teamCity;
public:
	sportsTeam();
	~sportsTeam();
    void registerSportsTeam();
    void displaySportsTeams();
};

