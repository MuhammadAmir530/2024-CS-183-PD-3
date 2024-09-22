#include <iostream>
using namespace std;
main(){
int age,time,average;
cout<<"Enter the person's age: ";
cin>>age;
cout<<"Enter the number of times they've moved: ";
cin>>time;
average=age/(time+1);
cout<<"Average number of years lived in same house: "<<average;
}
