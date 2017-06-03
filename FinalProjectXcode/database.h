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
        std::vector<std::shared_ptr<account>> _accounts;

public:
    
    database();
    ~database();
    
    
};
