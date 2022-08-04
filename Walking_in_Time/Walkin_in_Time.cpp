#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    bool event1 = a - b == 0;
    bool event2 = a - c == 0;
    bool event3 = b - c == 0;
    bool event4 = (a + b) - c == 0;
    bool event5 = (a + c) - b == 0;
    bool event6 = (b + c) - a == 0;
    if(event1 || event2 || event3 || event4 || event5 || event6){
        cout << "S" << endl;
    }
    else{
        cout << "N" << endl;
    }
    return 0;
}