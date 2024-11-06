#include <iostream>
using namespace std;
int main() 
{
    double bread = 100.0, cake = 150.0, donuts = 120.0;
    int quantityA, quantityB, quantityC;
    double total, totaldis;
    double total_Shipping = 0.0;
    int p_method;
    double transactionFee, After_Payment;
    cout << "The price of shoes is =$" << bread << "\nThe price of cloth is =$" << cake << "\nThe price of bag is =$" << donuts << "\n";
    cout << "How many shoes do you need: ";
    cin >> quantityA;
    cout << "The total price of shoes you buy is =$" << quantityA * bread << endl;
    
    cout << "How many clothes do you need: ";
    cin >> quantityB;
    cout << "The total price of clothes you buy is =$" << quantityB * cake << endl; 
    cout << "How many bags do you need: ";
    cin >> quantityC;
    cout << "The total price of bags you buy is =$" << quantityC * donuts << endl;
    total = (quantityA * bread) + (quantityB * cake) + (quantityC * donuts);
    cout << "The total bill of all items is equal to =$" << total << "\n";
    if (total > 1000)
     {
        totaldis = total * 0.9;
        cout << "you got a 10% discount. Total after discount: $" << totaldis << endl;
    }
     else
      {
        totaldis = total;
    }
    int location;
cout << "Enter your location (1, 2, or 3): ";
cin >> location;

double taxRate;
if (location == 1) {
    taxRate = 0.05;
} else if (location == 2) {
    taxRate = 0.10;
} else {
    taxRate = 0.08;
}

double totalWithTax = totaldis * (1 + taxRate);
cout << "Total after applying sales tax: $" << totalWithTax << endl;
    int loyaltyPoints = (totaldis > 800) ? 50 : 20;
    cout << "Your loyalty points are: " << loyaltyPoints << endl;
    
    cout << "Thanks for shopping!" << endl;

    return 0;
}