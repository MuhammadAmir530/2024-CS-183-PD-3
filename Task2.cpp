#include <iostream>
using namespace std;
main(){
int numberofminutes,framespersecond,totalnumberofframes;
cout<<"Number of Minutes:";
cin>>numberofminutes;
cout<<"Frames per second:";
cin>>framespersecond;
totalnumberofframes=numberofminutes*framespersecond*60;
cout<<"Total Number of Frames: "<<totalnumberofframes;
}
