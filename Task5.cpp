#include <iostream>
using namespace std;
main(){
string Name;
float weightloss,days;
cout<<"Enter the Name of the Person: ";
cin>>Name;
cout<<"Enter the target weight loss in kilograms: ";
cin>>weightloss;
days=weightloss*15;
cout<<Name<<" will need "<<days<<" days to lose "<<weightloss<<" kg weight by following the doctor's suggestions.";
}