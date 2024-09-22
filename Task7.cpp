#include <iostream>
using namespace std;
main(){
int adultticketprice,childticketprice,numberofat,numberofct,percentage,total,donation,remaining;
string Name;
cout<<"Enter the movie name: ";
cin>>Name;
cout<<"Enter the adult ticket price: $";
cin>>adultticketprice;
cout<<"Enter the child ticket price: $";
cin>>childticketprice;
cout<<"Enter the number of adult tickets sold: ";
cin>>numberofat;
cout<<"Enter the number of child tickets sold: ";
cin>>numberofct;
cout<<"Enter the percentage of the amount to be donated to charity: ";
cin>>percentage;
total=(adultticketprice*numberofat)+(childticketprice*numberofct);
donation=(total*percentage)/100;
remaining=total-donation;
cout<<"Movie: "<<Name<<endl;
cout<<"Total amount generated from ticket sales: $"<<total<<endl;
cout<<"Donation to charity("<<percentage<<"): $"<<donation<<endl;
cout<<"Remaining amount after donation: $"<<remaining<<endl;
}
