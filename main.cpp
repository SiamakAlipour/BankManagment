#include <iostream>
#include <iomanip>
#include <vector>
// Headers
#include "account.h"

using namespace std;

// Global Variables
int Choose;
bool run = true;
vector <Account*> accounts;
// Functions
void drawZero(){
    cout  << "\t\t\t\t\t*****************************************\n";
    cout  << "\t\t\t\t\t*    Welcome to Bank Managment System   *\n";
    cout  << "\t\t\t\t\t*        1) Register                    *\n";
    cout  << "\t\t\t\t\t*   No Accounts  have been registered   *\n";
    cout  << "\t\t\t\t\t*****************************************\n";
}
void drawOne(){
    cout  << "\t\t\t\t\t*****************************************\n";
    cout  << "\t\t\t\t\t*    Welcome to Bank Managment System   *\n";
    cout  << "\t\t\t\t\t*        1) Deposit                     *\n";
    cout  << "\t\t\t\t\t*        2) Withdraw                    *\n";
    cout  << "\t\t\t\t\t*        3) See Amount                  *\n";
    cout  << "\t\t\t\t\t*****************************************\n";
}
void ClearScreen(){
    system("cls");
}

auto main() ->int {



    while(run){
        ClearScreen();
        if (accounts.size() == 0){
            drawZero();
            cin >> Choose;
            if (Choose == 1) {
                ClearScreen();

                Account *obj;
                obj = new Account();
                accounts.push_back(obj);
                cout << "now set amount that you want to put first" << endl;
                int amount;
                cin >> amount;
                obj->setAmount(amount);

                cout << "Registered Perfectly now you have " << amount << " in your pocket" << endl;

                cout << "Choose 0 to go main menu and enter something else to exit " << endl;
                cin >> Choose;
                if (Choose == 0)
                    continue;
                else {
                    return 0;
                }
            }
            else {
                cout << "Wrong number entered \n";


                cout << "Enter 0 to back Main menu and Enter 1 to exit \n";
                cin >> Choose;
                if (Choose == 0)
                    continue;
                else {
                    return 0;
                }
            }

        }
        else if (accounts.size() == 1) {
            drawOne();
            cin >> Choose;
            if (Choose == 1){
                ClearScreen();
                cout << "Enter the amount you want to deposit \n";
                int amount;
                cin >> amount;
                accounts[0]->deposit(amount);
                cout << "Succesfly you deposit \n ";


                cout << "Enter 0 to back Main menu and Enter 1 to exit \n";
                cin >> Choose;
                if (Choose == 0)
                    continue;
                else {
                    return 0;
                }
            }
            else if (Choose == 2) {
                ClearScreen();
                cout << "Enter the amount you want to withdraw \n";
                int amount;
                cin >> amount;
                accounts[0]->withdraw(amount);

                cout << "Succesfly you withdrwa \n";
                cout << "Enter 0 to back Main menu and Enter 1 to exit \n";
                cin >> Choose;
                if (Choose == 0)
                    continue;
                else {
                    return 0;
                }
            }
            else if (Choose == 3) {
                ClearScreen();
                cout << " Amount of your account is : "<< accounts[0]->getAmount();
                cout << "Enter 0 to back Main menu and Enter 1 to exit \n";
                cin >> Choose;
                if (Choose == 0)
                    continue;
                else {
                    return 0;
                }
            }

            else {
                cout << "Wrong number entered \n";


                cout << "Enter 0 to back Main menu and Enter 1 to exit \n";
                cin >> Choose;
                if (Choose == 0)
                    continue;
                else {
                    return 0;
                }
            }
        }
    cout << endl;
    }








    cout << endl;
}
