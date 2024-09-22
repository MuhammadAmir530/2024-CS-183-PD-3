#include <iostream>
using namespace std;
main(){
float impostercount,playercount,percentagechance;
cout<<"Enter Imposter count:";
cin>>impostercount;
cout<<"Enter player count:";
cin>>playercount;
percentagechance=100*impostercount/playercount;
cout<<"Chance of being an imposter: "<<percentagechance<<"%";
} 