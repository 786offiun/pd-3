#include<iostream>
using namespace std;
main()
{
string name;
float sub1;
float sub2;
float sub3;
float sub4;
float sub5;
float percentage;
cout<<"enter your name: ";
cin>>name;
cout<<"enter your firs subject marks: ";
cin>>sub1;
cout<<"enter your second subject marks: ";
cin>>sub2;
cout<<"enter your third subject marks: ";
cin>>sub3;
cout<<"enter your forth subject marks: ";
cin>>sub4;
cout<<"enter your fivth subject marks: ";
cin>>sub5;

percentage=(sub1+sub2+sub3+sub4+sub5)/500*100; 
cout<<"your name is "<<name <<"your percentage is "<<percentage;
}