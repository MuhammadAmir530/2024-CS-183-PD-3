#include <iostream>
using namespace std;
main(){
float vegetablepriceperkg,fruitpriceperkg,earningincoins,earninginrupees;
int totalkgofvegetables,totalkgoffruit;
cout<<"Enter vegetable price per kilogram (in coins): ";
cin>>vegetablepriceperkg;
cout<<"Enter fruit price per kilogram (in coins): ";
cin>>fruitpriceperkg;
cout<<"Enter total kilograms of vegetable: ";
cin>>totalkgofvegetables;
cout<<"Enter total kilograms of fruits: ";
cin>>totalkgoffruit;
earningincoins=(vegetablepriceperkg*totalkgofvegetables)+(fruitpriceperkg*totalkgoffruit);
earninginrupees=earningincoins/1.94;
cout<<"Total earnings in Rupees (Rps): "<<earninginrupees;
}