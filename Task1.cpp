#include <iostream>
using namespace std;
main(){
int numberofsidesofpolygon,sumofinternalangles;
cout<<"Enter the number of sides of the polygon:";
cin>> numberofsidesofpolygon;
sumofinternalangles=(numberofsidesofpolygon-2)*180;
cout<<"The sum of internal angles of a "<<numberofsidesofpolygon<<"-sided polygon is: "<<sumofinternalangles<<" degrees";
} 