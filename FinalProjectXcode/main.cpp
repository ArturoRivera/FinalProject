#include <iostream>
#include "account.h"
#include "business.h"
#include "message.h"
#include "sportsTeam.h"
#include "user.h"
//#include <curses.h>
using namespace std;


void displayMenu();
void registerUser();
void displayUsers();
void sendMessage();
void viewMessages();



int main()
{
    displayMenu();
	//system("pause");
    return 0;
}



void displayMenu()
{
    
    
    
    int choice = 0;
    
	do
    {
        //system("cls");
        
        cout << "Hello, welcome to AIM. What would you like to do?" << endl;
        cout << "1) Register user." << endl;
        cout << "2) Display users." << endl;
        cout << "3) Send message to user." << endl;
        cout << "4) View my messages." << endl;
        cout << "Enter '0' to exit program. " << endl;
        cin >> choice;
        
        switch (choice)
        {
			case 1: registerUser(); break;
			case 2: displayUsers(); break;
			case 3: sendMessage(); break;
			case 4: viewMessages(); break;
            default: break;
        }
        
        
        
    } while (choice != 0);
}

void registerUser()
{
    int selection = -1;
    string userName;
    cout << "What would you like your Username to be?" << endl;
    cin >> userName;
    
    do
    {
        cout << "What type of user would you like to register as? Press 0 to go back to the main page." << endl;
        cout << "1) User" << endl;
        cout << "2) Sports Team" << endl;
        cout << "3) Business" << endl;
        cin >> selection;
        
        switch (selection)
        {
           // case 1: user::registerUser(); break;
           // case 2: sportsTeam::registerSportsTeam(); break;
           // case 3: business::registerBusiness(); break;
           // default: break;
        }
        
        
        
    } while (selection != 0);
}

void displayUsers()
{
    int selection = -1;
    
    do
    {
        cout << "Which accounts would you like to display? Press 0 to go back to the main page" << endl;
        cout << "1) Users only." << endl;
        cout << "2) Business only." << endl;
        cout << "3) Sports Teams only." << endl;
        cin >> selection;
        
    } while (selection != 0);

}

void sendMessage()
{
    int selection = -1;
    string recipient;
    
    do
    {
        cout << "Who would you like to send a message to?" << endl;
        cin >> recipient;
        

        
    } while (selection != 0);

}

void viewMessages()
{
    int selection = -1;
    string userName;
    
    do
    {
        cout << "Who's messages would you like to see?" << endl;
        cin >> userName;
        
    } while (selection != 0);
    

}
