#ifndef MODULESHARBAR_H
#define MODULESHARBAR_H
#include<iostream>
#include<cmath>
using namespace std;

void S_calculation(){
    double S=0;
     int x=0,y=0,z=0;
   double PI = 3.141592653589793;
   cout<<"\nX - ";
      cin>>x;
      while(x<0|| x==0){
          if(x<0 || x==0){
              cout<<"Введiть х бiльше 0: ";
          }
          cin>>x;
      }
      while(x<=y || y==0 || y<0){
      cout<<"Y - ";
      if(x<y || x==y || y<0){
        cout<<"Y має бути менше нiж x:  ";
      }
      cin>>y;
      }
      while(z==0 || z<0){
      cout<<"Z - ";
      if(z==0 || z<0){
        cout<<"Z має бути бiльше 0:  ";
      }
       cin>>z;
      }
    S=log(x-y)+sqrt(PI*pow(x,2)/x+z/2*pow(y,2));
    cout<<"x: "<<hex<<x;
    cout<<"\ny: "<<hex<<y;
    cout<<"\nz: "<<hex<<z;
    cout<<"\nS: "<<S<<endl;
}
string Name_of_Developer()
{
    string name;
    name="Версiя 1.0\nГарбар Вадим Володимирович\nЦНТУ, 2021 рiк.<c>\n";
    return name;
}
int validation(){
    int a=0;
    while (!(cin >> a)){
        cout << "Введiть число: \n";
        cin.clear();
        fflush(stdin);
        cout<<"===>";
    }
    while(a<0 || a==0){
        if(a<0 || a==0){
            cout<<"Введiть бiльше 0: "<<endl;
            cout<<"===>";
            cin.clear();
            fflush(stdin);
        }
        a=validation();
    }
    return a;
}

void deposit()
{
    float sumDeposit = 0;
    int amountMonth = 0;
    float profit = 0;
    float annualRate = 0;
    const int daysInYear = 365;
    const int daysInMonth = 30;
    cout << "Введiть суму депозита: ";
    sumDeposit=validation();
    cout << "Введiть кiлькiсть мiсяцiв 6 або 12: ";
    cin>>amountMonth;
    while(true){
        if(amountMonth==6 || amountMonth==12){
            break;
        }
        else{
            cin.clear();
            fflush(stdin);
            cout << "Введiть кiлькiсть мiсяцiв 6 або 12: ";
            cin>>amountMonth;
        }
    }
    switch (amountMonth) {
    case 6:annualRate=16;
        break;
    case 12:annualRate=18;
        break;
    }
    cout << "Вiдсоткiв у мiсяць: ";
    profit = sumDeposit * (annualRate / 100)  / daysInYear * daysInMonth;
    cout << profit << endl;
    cout << "Вiдсотки за весь термiн: ";
    profit *= amountMonth;
    cout << profit;
    cout<<endl;
}
int validation2()
{
    float arr;
    while (!(cin >> arr)){
        cout << "Помилка введiть числа\n";
        cin.clear();
        fflush(stdin);
        cout<<"введiть показники за 31 день м/с: ";
    }
    return arr;
}

void veather()
{
    float arr[31];
    int lol[31];
    for (int i = 0; i < 31; i++) {
        lol[i]=0;
    }
    for (int i = 0; i < 31; i++) {
        cout<< "введiть показники за 31 день м/с: ";
        arr[i]=validation2();
    }

    for (int i = 0; i < 31; i++) {
        if(arr[i]<0.3){
            lol[i]=0;
        }
        if(arr[i]>=0.3 && arr[i]<=1.5){
            lol[i]=1;
        }
        if(arr[i]>=1.6 && arr[i]<=3.3){
            lol[i]=2;
        }
        if(arr[i]>=3.4 && arr[i]<=5.4){
            lol[i]=3;
        }
        if(arr[i]>=5.5 && arr[i]<=7.9){
            lol[i]=4;
        }
        if(arr[i]>=8.0 && arr[i]<=10.7){
            lol[i]=5;
        }
        if(arr[i]>=10.8 && arr[i]<=13.8){
            lol[i]=6;
        }
        if(arr[i]>=13.9 && arr[i]<=17.1){
            lol[i]=7;
        }
        if(arr[i]>=17.2 && arr[i]<=20.7){
            lol[i]=8;
        }
        if(arr[i]>=20.8 && arr[i]<=24.4){
            lol[i]=9;
        }
        if(arr[i]>=24.5 && arr[i]<=28.4){
            lol[i]=10;
        }
        if(arr[i]>=28.5 && arr[i]<=32.6){
            lol[i]=11;
        }
        if(arr[i]>32.6){
            lol[i]=12;
        }
    }
    int max = lol[0];

    for (int i = 0; i < 31; i++) {
        if (lol[i] > max) {
            max = lol[i];
        }
    }
    cout<<"максимальна сила вiтру у шкалi бофорта "<<max;
}
int validation3(){
    int a=0;
    while (!(cin >> a)){
            cout << "Введiть числа: \n";
            cin.clear();
            fflush(stdin);
            cout<<"===>";
        }
    while(a<0 || a==0 || a>908000){
        if(a<0 || a==0 || a>908000){
        cout<<"Введiть число вiд 0 до 9008000"<<endl;
        cout<<"===>";
        cin.clear();
        fflush(stdin);
        }
        a=validation3();
    }
    return a;
}

void boll()
{
    cout<<"Ввеiть число вiд 0 до 9008000"<<endl;
    cout<<"===>";
    string text="";
    int a=0;
    a=validation3();
    int k=0;
    while(a) {
        k = a % 2;
        a = a / 2;
        text =to_string(k)+text;
    }
    cout << text << endl;
    int i=0,count_null=0,count_one=0;
    while (text[i]) {
        if(text[i]=='0') count_null++;
        else if(text[i]=='1') count_one++;
        i++;
    }
    cout<<"13 елемент є: "<<text[12]<<endl;
    if(text[12]=='0') {
        cout<<"Кiлькiсть 0: "<<count_null;
    }
    else {
        cout<<"Кiлькiсть 1: "<<count_one;
    }
}


#endif // MODULESHARBAR_H
