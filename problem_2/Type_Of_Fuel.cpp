#include <iostream>
using namespace std;
int main(){
    int fuel_type;
    int alcholCounter = 0, dieselCounter = 0, gasolineCounter = 0 ;
    cin >> fuel_type;
    while(fuel_type != 4){
        if(fuel_type == 1){
            alcholCounter++;
        }
        else if(fuel_type == 2){
            gasolineCounter++;
        }
        else if(fuel_type == 3){
            dieselCounter++;
        }
        cin >> fuel_type;
    }
    cout<<"MUITO OBRIGADO"<<endl;
    cout<<"Alcool: "<<alcholCounter<<endl;
    cout<<"Gasolina: "<<gasolineCounter<<endl;
    cout<<"Diesel: "<<dieselCounter<<endl;
    return 0;
}