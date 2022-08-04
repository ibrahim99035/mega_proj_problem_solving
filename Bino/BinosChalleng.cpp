#include <iostream>
using namespace std;
int main(){
    int n;
    int counter2 = 0, counter3 = 0, counter4 = 0, counter5 = 0;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    } 
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){counter2++;}
        if(arr[i] % 3 == 0){counter3++;}
        if(arr[i] % 4 == 0){counter4++;}
        if(arr[i] % 5 == 0){counter5++;}
    }  
    cout<<counter2<<" Multiplo(s) de 2"<<endl;
    cout<<counter3<<" Multiplo(s) de 3"<<endl;
    cout<<counter4<<" Multiplo(s) de 4"<<endl;
    cout<<counter5<<" Multiplo(s) de 5"<<endl;
    return 0;
}