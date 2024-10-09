#include <iostream>
#include <string>

// Name: Andy Nguyen
//Assignment: Print Exressions With Options
//Date: 07 October 2024

using namespace std;

int main() {
    //Define Variables
    int firstOperand, secondOperand;
    char printingOption;

    //Ask for first operand
    cout << "Please enter the first operand:  "<< endl;
    cin >> firstOperand;

    //Error message if first integer is negative
    if (firstOperand > 0)
        cout << firstOperand << endl;
    else
        cout << "The first operand is not valid" << endl;

    //Ask for second operand
    cout << "Please enter the second operand: "<< endl;
    cin >> secondOperand;

    //Error message if second ineger is negative
    if (secondOperand > 0)
        cout << secondOperand << endl;
    else   
        cout << "The second operand is not valid" << endl;

    //Ask for printing Option
    cout << "Please enter the printing option ('A' or 'B'): "<< endl;
    cin >> printingOption;

    //switch case
    switch(printingOption) {
        case 'A':
            cout << firstOperand << "    +   " << secondOperand << "    =   " <<(firstOperand + secondOperand) << endl;
            cout << firstOperand << "    -   " << secondOperand << "    =   " <<(firstOperand - secondOperand) << endl;    
            cout << firstOperand << "    *   " << secondOperand << "    =   " <<(firstOperand * secondOperand) << endl;
            cout << firstOperand << "    /   " << secondOperand << "    =   " <<(firstOperand / secondOperand) << endl;
            cout << firstOperand << "    %   " << secondOperand << "    =   " <<(firstOperand % secondOperand) << endl;
            break;

        case 'B':
            cout << firstOperand << "    +   " << secondOperand << "    =   " <<(firstOperand + secondOperand) << endl;
            cout << firstOperand << "    -   " << secondOperand << "    =   " <<(firstOperand - secondOperand) << endl;
            break;

        default:
            cout << "Unsupported printing option." << endl;
            break;

return 0;
    }
}