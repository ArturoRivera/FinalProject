#include "database.h"
#include "account.h"
#include <iostream>
using namespace std;

database::database(string name) : _name(name)
{
    
}


database::database()
{
    
}

database::~database()
{
    
}

void database::addDatabase(shared_ptr<database> newDatabase)
{
    _accounts.push_back(newDatabase);
}
