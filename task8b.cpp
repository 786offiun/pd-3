#include<iostream>
using namespace std;
int main()
{
int a,b,c,d,e,f,num,sum;
cout<<"Enter Four Digit Number: ";
cin>>num;
a = num % 10;
b = num /10;
c = b % 10;
d = b / 10;
e = d % 10;
f = d / 10;

sum = a + c + e + f ;



cout<<"Sum: "<<sum;


}