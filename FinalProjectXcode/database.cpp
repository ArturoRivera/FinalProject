#include "database.h"
#include "account.h"

database::database(std::string name) : _name(name)
{
    //Constructor
}


database::~database()
{
    //Destructor
}


void database::addAccount(std::shared_ptr<account> newAccount)
{
    _accounts.push_back(newAccount);
}


std::string database::getInfo()
{
    int users = 0;
    int sportsTeams = 0;
    int businesses = 0;
    
    std::string output = "Your database has: \n";
    output += _accounts.size() > 0 ? std::to_string(_accounts.size()) + " total users.\n\n" : "No users registered!\n\n";
    
    for (int i = 0; i < _accounts.size(); i++)
    {
        if(_accounts[i]->getAccountType() == "User")
            users++;
        else if (_accounts[i]->getAccountType() == "Sports Team")
            sportsTeams++;
        else if (_accounts[i]->getAccountType() == "Business")
            businesses++;
    }
    
    output += users > 0 ? std::to_string(users) + " of those are personal accounts.\n" : "You have no users registered!\n";
    output += sportsTeams > 0 ? std::to_string(sportsTeams) + " of those are sports teams.\n" : "You have no sports teams registered!\n";
    output += businesses > 0 ? std::to_string(businesses) + " of those are business accounts.\n" : "You have no businesses registered!\n";
    
    return output;
}








