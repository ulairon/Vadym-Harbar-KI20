#include <iostream>
#include<windows.h>
#include "ModulesHarbar.h"

using namespace std;

int main()
{
    cout<<Name_of_Developer();
    char checkbox=0;
    while (true){
        cout<<"Введiть k для виконання S_calculation"<<endl;
        cout<<"Введiть h для розрахунку депозиту"<<endl;
        cout<<"Введiть g для розрахунку сили вiтру"<<endl;
        cout<<"Введiть f для розрахунку кiлькостi бiтiв"<<endl;
        cout<<"Введiть на вибiр c,d,D для виходу iз програми"<<endl;
        cout<<"====>";
        cin>>checkbox;
        if(checkbox=='k'){
            S_calculation();
        }
        if(checkbox=='h'){
            deposit();
        }
        if(checkbox=='g'){
            veather();
        }
        if(checkbox=='f'){
            boll();
        }
        if(checkbox=='c'|| checkbox=='D' || checkbox=='d'){
            break;
        }
        else{
            Beep(500,500);
        }
    }
    system("pause");
    getchar();
    return 0;
}
