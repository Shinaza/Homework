#include <iostream>
#include <string>

// Name: Andy Nguyen
//Assignment: Print Exressions With Options
//Date: 07 October 2024

using namespace std;

int main() {
    string itemName, purchaseOccassion;
    double itemPrice, subtotal, tax, total;
    int itemNumber;
    char giftPurchase;

cout << "Please enter the name of the item: " << endl;
getline(cin, itemName);

cout << "Please enter the price for each item: " << endl;
cin >> itemPrice;

cout << "Please enter the quantity: " << endl;
cin >> itemNumber;

cout << "Is this a gift? " << endl;
cin >> giftPurchase;

cout << "Please enter the description of the occassion: " << endl;
cin.ignore();
getline(cin, purchaseOccassion);

subtotal = itemPrice * itemNumber;

tax = subtotal * 0.1;

total = subtotal + tax;

cout.setf(ios::fixed);
cout.precision(2);
cout << "========== RECEIPT ==========" << endl;
cout << "Name:       " << itemName << endl;
cout << "Price:      $" << itemPrice << endl;
cout << "Quantity:   " << itemNumber << endl;
cout << "Subtotal:   $" << subtotal << endl;
cout << "Tax:        $" << tax << endl;
cout << "Total:      $" << total << endl;
cout << "Gift (y/n):" << giftPurchase << endl;
cout << "Occasion:  " << purchaseOccassion << endl;
cout << "============================" << endl;

}