# Mega Project Summer Training

![Megra Proj Logo](http://megaproj.com/images+/homeLogo.png)

## Task 1 -> Fixed Password 1114

[View the problem from here](https://www.beecrowd.com.br/judge/en/problems/view/1114)

## Tsk 2 -> Type of Fuel 1134

[View the problem from here](https://www.beecrowd.com.br/judge/en/problems/view/1134)

## Tsk 3 -> Walking in Time 2235

[View the problem from here](https://www.beecrowd.com.br/judge/en/problems/view/2235)

## Tsk 4 -> Hard Choice 2702

[View the problem from here](https://www.beecrowd.com.br/judge/en/problems/view/2702)

## Tsk 5 -> Divisor1 1157

[View the problem from here](https://www.beecrowd.com.br/judge/en/problems/view/1157)

## Tsk 6 -> Bino’s Challenge 2060

[View the problem from here](https://www.beecrowd.com.br/judge/en/problems/view/2060)

---

### Task 1 : Fixed Password Source

```C++
#include <iostream>
using namespace std;
int main(){

    int password;
    bool flag = true;
    while (flag){
        cin>>password;
        if (password == 2002){
            cout<<"Acesso Permitido"<<endl;
            flag = false;
        }
        else{
            cout<<"Senha invalida"<<endl;
        }
    }
    return 0;
}
```

---

### Task 2 : Type of Fuel Source

```C++
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
```

---

### Task 3 : Walking in Time Source

```C++
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
```

---

### Task 4 : Hard Choice Source

```C++
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
```

---

### Task 5 : Divisor1 Source

```C++
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            cout << i << endl;
        }
    }
    return 0;
}
```

---

### Task 6 : Bino’s Challenge Source

```C++
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
```
