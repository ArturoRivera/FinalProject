#pragma once
#include <vector>
#include <string>
#include <memory>
#include "account.h"
#include "business.h"
#include "sportsTeam.h"
#include "user.h"
#include "message.h"

class database
{
private:
    std::string _name;
    std::vector<std::shared_ptr<account>> _accounts;

public:
    
    database(std::string name);
    database();
    ~database();
    
    void addDatabase(std::shared_ptr<database> newDatabase);
    
    
};
