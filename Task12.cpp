#include <iostream>
using namespace std;
main(){ 
int n,w,h,area,numberofwalls;
cout<<"Number of square meters you can paint: ";
cin>>n;
cout<<"Width of single wall (in meters): ";
cin>>w;
cout<<"Height of single wall (in meters): ";
cin>>h;
area=w*h;
numberofwalls=n/area;
cout<<"Number of walls you can paint: "<<numberofwalls;
}