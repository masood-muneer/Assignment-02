#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double bread = 100.0, cake = 150.0, donuts = 120.0;
    int quantityA, quantityB, quantityC;
    double total, totaldis, totalWithTax, AfterPayment;
    int location, pmethod;
    double transactionFee;
    int stockA = 10, stockB = 8, stockC = 15;

    cout << "The price of shoes is =$" << bread << "\nThe price of cloth is =$" << cake << "\nThe price of bag is =$" << donuts << "\n";
    cout << "How many shoes do you need? We have only " << stockA << " pairs: ";
    cin >> quantityA;
    if (quantityA <= stockA) {
        cout << "The total price of shoes you buy is =$" << quantityA * bread << endl;
    } else {
        cout << "We have limited stock!\n";
        quantityA = 0; 
    }

    cout << "How many clothes do you need? We have only " << stockB << ": ";
    cin >> quantityB;
    if (quantityB <= stockB) {
        cout << "The total price of clothes you buy is =$" << quantityB * cake << endl;
    } else {
        cout << "We have limited stock!\n";
        quantityB = 0;
    }

    cout << "How many bags do you need? We have only " << stockC << ": ";
    cin >> quantityC;
    if (quantityC <= stockC) {
        cout << "The total price of bags you buy is =$" << quantityC * donuts << endl;
    } else {
        cout << "We have limited stock!\n";
        quantityC = 0;
    }

    double shoesp = quantityA * bread;
    double clothp = quantityB * cake;
    double bagp = quantityC * donuts;

    total = shoesp + clothp + bagp;
    if (total > 1000) {
        totaldis = total * 0.9;
        cout << "Congratulations, you got a 10% discount. \nTotal after discount: $" << totaldis << endl;
    } else {
        totaldis = total;
    }

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

    totalWithTax = totaldis * (1 + taxRate);
    cout << "Total after applying sales tax: $" << totalWithTax << endl;

    cout << "Enter Payment Method (1 for Credit Card, 2 for PayPal, 3 for Cash): ";
    cin >> pmethod;

    transactionFee = (pmethod == 1) ? totalWithTax * 0.02 : (pmethod == 2) ? totalWithTax * 0.03 : 0.0;
    AfterPayment = totalWithTax + transactionFee;

    cout << "Transaction Fee: $" << transactionFee << endl;
    cout << "Total amount you pay is: $" << AfterPayment << endl;

    int loyaltyPoints = (totaldis > 1000) ? 50 : 20;
    cout << "Shoes Quantity : " << quantityA << "\tPrice :\t$" << shoesp << endl;
    cout << "Cloth Quantity : " << quantityB << "\tPrice :\t$" << clothp << endl;
    cout << "Bag   Quantity : " << quantityC << "\tPrice :\t$" << bagp << endl;
    cout << "Your bill without extra charges: \t$" << total << endl;
    cout << "Total after applying sales tax: $" << totalWithTax << endl;
    cout << "Transaction Fee: $" << transactionFee << endl;
    cout << "Total amount you pay is: $" << AfterPayment << endl;
    cout << "Your loyalty points are: " << loyaltyPoints << endl;
    cout << "Thanks for shopping!" << endl;

    return 0;
}
