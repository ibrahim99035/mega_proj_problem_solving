#include <iostream>
using namespace std;
int main(){
    int available_chicken, available_beef, available_pasta;
    int required_chicken, required_beef, required_pasta;
    cin>>available_chicken>>available_beef>>available_pasta;
    cin>>required_chicken>>required_beef>>required_pasta;
    int un_recived_chicken = 0, un_recived_beef = 0, un_recived_pasta = 0;
    if(required_chicken > available_chicken){
        un_recived_chicken = required_chicken - available_chicken;
    }
    if(required_beef > available_beef){
        un_recived_beef = required_beef - available_beef;
    }
    if(required_pasta > available_pasta){
        un_recived_pasta = required_pasta - available_pasta;
    }
    int result = un_recived_chicken + un_recived_beef + un_recived_pasta;
    cout<<result<<endl;
    return 0;
}