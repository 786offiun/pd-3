#include<iostream>
using namespace std;
int main()
{
int size,cost,area;
int costfpp,costarea;
cout<<"Enter Bag Size in Pounds: ";
cin>>size;
cout<<"Enter cost of the bag: ";
cin>>cost;
cout<<"Enter area covered by each bag in square feet: ";
cin>>area;
cout<<"---------------------------------------------"<<endl;
costfpp = cost / size;
cout<<"Cost of the fertilizer per pound: "<<costfpp<<endl;
costarea = size * area;
cout<<"Cost of ferilizing the area per square feet: "<<costarea;
}