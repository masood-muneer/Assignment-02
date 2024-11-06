#include<iostream>
using namespace std;
int main()
{
   double bread, cake, donuts;
    int quantityA, quantityB, quantityC;
    int total;
    bread=100;
    cake=150;
    donuts =120;
    int totaldis;
    cout<<"The price of shoes is=$"<<bread<<"\nthe price of cloth is=$"<<cake<<"\nthe price of bag is=$"<<donuts<<"\n";
    cout<<"How many shoes you need :";
    cin>>quantityA;
    cout<<"The total price of shoes you buy is =$"<<quantityA*bread<<endl;
    cout<<"How many clothes you need :";
    cin>>quantityB;
    cout<<"The total price of clothes you buy is =$"<<quantityB*cake<<endl;
    cout<<"How many bags you need :";
    cin>>quantityC;
    cout<<"The total price of bags you buy is =$"<<quantityC*donuts<<endl;
    total =(quantityA*bread)+(quantityB*cake)+(quantityC*donuts);
    cout<<"The total bill of all thins is equal to =$"<<total<<"\n";
    totaldis=total*0.9;
    if(total>1000)
    {
    cout<<"Congratulations you got the discount of 10% from total :"<<totaldis<<"$"<<endl;
    }
    if(totaldis<500)
    {
        cout<<"After add shipping total price is =$"<<totaldis+30<<"\n";
    }
    if(total>1500)
    {
        cout<<"your Loyalty points are : 50"<<endl;
    }
    else
    {
        cout<<"your Loyalty points are :20"<<endl;
    }
     cout <<"Thanks for shoping";
}