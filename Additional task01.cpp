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
    cout << "The price of shoes is =$" << bread << "\nThe price of cloth is =$" << bread << "\nThe price of bag is =$" << donuts << "\n";
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
        cout << "Congratulations, you got a 10% discount. Total after discount: $" << totaldis << endl;
    }
     else
      {
        totaldis = total;
    }
    if (totaldis > 500)
     {
        total_Shipping = totaldis + 30; 
        cout << "After adding shipping, total price is = $" << total_Shipping << "\n";
    } 
    else
     {
        total_Shipping = totaldis; 
    }
    cout << "Enter Payment Method (1 for Credit Card, 2 for PayPal, 3 for Cash): ";
    cin >> p_method;
    transactionFee = (p_method == 1) ? total_Shipping * 0.2 : (p_method == 2) ? total_Shipping * 0.3 : 0.0;
    After_Payment = total_Shipping + transactionFee;
    cout << "Total amount you pay is: $" << After_Payment << endl;
    int loyaltyPoints = (totaldis > 1000) ? 50 : 20;
    cout << "Your loyalty points are: " << loyaltyPoints << endl;
    
    cout << "Thanks for shopping!" << endl;

    return 0;
}