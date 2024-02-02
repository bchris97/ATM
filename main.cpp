
#include "program.h"

#include <iostream>
using namespace std;


int main()
{
    int option;
    int balance = 100;

    
    showMenu();

    cout << "Please enter your choice: ";
    cin >> option;
    cout << endl;

    switch (option) {
    case 1:
        cout << "Current Balance: $" << balance << endl;
        break;

    }

    return 0;
}

