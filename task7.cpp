#include<iostream>
using namespace std;
main()
{
string movie;
int aticket_p;
int cticket_p;
int a_sold;
int c_sold;
float percent;
float donation;
float total_amount;
int amount;
int camount;

cout<<"enter ther movie name";
cin>>movie;
cout<<"enter the price of adult ticket: ";
cin>>aticket_p;
cout<<"enter the price of child ticket";
cin>>cticket_p;
cout<<"enter the number of adult ticket have been sold: ";
cin>>a_sold;
amount=aticket_p*a_sold;
cout<<"enter the number of child ticket have been sold";
cin>>c_sold;
cout<<"enter the percentage:";
cin>>percent;
camount=cticket_p*c_sold;
total_amount=camount+amount;
cout<<"your total amount";
cout<<total_amount;
donation=(percent/100)*total_amount;
cout<<"YOU DONATION:";
cout<<donation;

}