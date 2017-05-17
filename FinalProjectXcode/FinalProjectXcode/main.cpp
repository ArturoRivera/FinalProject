#include <iostream>
#include "account.h"
#include "business.h"
#include "message.h"
#include "sportsTeam.h"
#include "user.h"
//#include <curses.h>
using namespace std;


void displayMenu();



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
        
        cout << "Hello, welcome to Swim. What would you like to do?" << endl;
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



