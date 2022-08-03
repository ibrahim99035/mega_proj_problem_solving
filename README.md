# Mega Project Summer Training

## Task 1 -> Fixed Password 1114

[View the problem from here](https://www.beecrowd.com.br/judge/en/problems/view/1114)

## Tsk 2 -> Type of Fuel 1134

[View the problem from here](https://www.beecrowd.com.br/judge/en/problems/view/1134)

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
