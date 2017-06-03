#pragma once
#include <string>
#include "account.h"

class business : public account
{
private: 
	std::string _businessName;
	
public:
	business(std::string userName);
	~business();

	void registerBusiness();
	void displayBusinesses();
};

