/******************************************************
 * Final Project                                      *
 * Developer: Arturo Rivera                           *
 * CIS - 17A                                          *
 ******************************************************/

#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <memory>
#include <stack>
#include "account.h"
#include "business.h"
#include "sportsTeam.h"
#include "user.h"
#include "database.h"

using namespace std;

//Function prototypes
void displayMenu();
void registerUser(const shared_ptr<database> database);
void displayUsers(const shared_ptr<database> database);
void sendMessage();
void viewMessages();

//Stacks for messages
stack<string> userMessages;
stack<string> sportsTeamMessages;
stack<string> businessMessages;

int main()
{
    displayMenu();
	//system("pause");
    return 0;
}



void displayMenu()
{
    string applicationName = "AIM";
    auto mainDatabase = make_shared<database>(applicationName);
    
    
    int choice = 0;
    
	do
    {
        //system("cls");
        
        cout << "Hello, welcome to " << mainDatabase->getName() << ". What would you like to do?" << endl;
        cout << "1) Register user." << endl;
        cout << "2) Display users." << endl;
        cout << "3) Send message to users." << endl;
        cout << "4) View messages." << endl;
        cout << "Enter '0' to exit program. " << endl;
        cin >> choice;
        
        switch (choice)
        {
			case 1: registerUser(mainDatabase); break;
			case 2: displayUsers(mainDatabase); break;
			case 3: sendMessage(); break;
			case 4: viewMessages(); break;
            default: break;
        }
        
        
        
    } while (choice != 0);
}



void registerUser(const shared_ptr<database> mainDatabase) //mainDatabase
{
    
    string userName;
    cout << "Enter username for your account: ";
    cin.ignore();
    getline(cin, userName);
    cout << endl;
    
    
    cout << "What type of account would you like to set up?" << endl;
    cout << "1) Personal Account" << endl;
    cout << "2) Sports Team Account" << endl;
    cout << "3) Business Account" << endl;
    
    int choice = -1;
    cin >> choice;
    cin.ignore();
    switch (choice)
    {
        case 1: mainDatabase->addAccount(make_shared<user>(userName)); break;
        case 2: mainDatabase->addAccount(make_shared<sportsTeam>(userName)); break;
        case 3: mainDatabase->addAccount(make_shared<business>(userName)); break;
        default: cout << "Invalid choice!"; break;
    }
}



void displayUsers(const shared_ptr<database> mainDatabase) //mainDatabase
{
    cout << mainDatabase->getInfo();
}



void sendMessage()
{
    
    string message;
    cout << "Please enter your messsage." << endl;
    cin.ignore();
    getline(cin, message);
    cout << "Who would you like to send a message to?" << endl;
    cout << "1) Users." << endl;
    cout << "2) Sports Teams." << endl;
    cout << "3) Businesses." << endl;
    int selection = -1;
    cin >> selection;
    
    switch (selection)
    {
        case 1: userMessages.push(message); break;
        case 2: sportsTeamMessages.push(message); break;
        case 3: businessMessages.push(message); break;
        default: break;
        
    }
    
    
}



void viewMessages()
{
    cout << "Who's messages would you like to display?" << endl;
    cout << "1) Users." << endl;
    cout << "2) Sports Teams." << endl;
    cout << "3) Businesses." << endl;
    int selection = -1;
    cin >> selection;
    
    if (selection == 1){
        for (stack<string> dump = userMessages; !dump.empty(); dump.pop())
        cout << dump.top() << endl;
        
    } else if (selection == 2){
        for (stack<string> dump = sportsTeamMessages; !dump.empty(); dump.pop())
        cout << dump.top() << endl;
        
    } else if (selection == 3){
        for (stack<string> dump = businessMessages; !dump.empty(); dump.pop())
        cout << dump.top() << endl;
        
    } else {
        cout << "Please enter a valid selection!" << endl;
        
    }

}


//Recursion examples

int factorial(int n)
{
    if (n ==1 )
    {
        return n;
    }
    
    return n * factorial(n - 1);
}


int secondFactorial(int n)
{
    while (n != 1)
    {
        return n *= factorial(n - 1);
    }
    
    return n;
}
