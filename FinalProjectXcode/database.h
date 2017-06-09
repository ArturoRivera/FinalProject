#pragma once
#include <string>
#include <vector>
#include <memory>
#include "account.h"
#include "business.h"
#include "sportsTeam.h"
#include "user.h"
#include "message.h"


class database
{
private:
    std::vector<std::shared_ptr<account>> _accounts;
    std::string _name;
    
    
public:
    database(std::string name);
    ~database();
    std::string getName() const {return _name;}
    void addAccount(std::shared_ptr<account> newAccount);
    std::string getInfo();
    
};
