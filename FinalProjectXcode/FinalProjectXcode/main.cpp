#include <iostream>
#include <curses.h>
using namespace std;


void displayMenu();
void registerUser();
void displayUsers();
void sendMessage();
void viewMessages();



int main()
{
    displayMenu();
    return 0;
}



void displayMenu()
{
    int choice = 0;
    
    do
    {
        //system("clear");
        
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



void registerUser()
{
    cout << "User Registered! " << endl;
}



void displayUsers()
{
    cout << "Here are the users. " << endl;
}



void sendMessage()
{
    cout << "Message sent! " << endl;
}



void viewMessages()
{
    cout << "You have no new messages. " << endl;
}
