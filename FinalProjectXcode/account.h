#pragma once
#include <string>
class account
{
private: 
	std::string _userName;
	std::string _accountType;

public:
	account(std::string userName);
	~account();

	void setAccountType(std::string type);
	std::string getAccountType() { return _accountType; }
	std::string getName() const { return _userName; }
};

