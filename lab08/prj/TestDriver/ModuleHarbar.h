#ifndef MODULESHARBAR_H
#define MODULESHARBAR_H
#include <iostream>
#include<math.h>

using namespace std;

int check(int num){
    bool valid = false;
    while (!valid){
        valid = true;
        cout << "Введiть рацiональне число: ";
        cin >> num;
        if(cin.fail()) {
            cin.clear();
            cin.ignore();
            valid = false;
        }

    }
    return num;
}
string Name_of_Developer()
{
    string name;
    name="Версiя 1.0\nРозробник: Гарбар Вадим Володимирович.\nЦНТУ, 2021 рiк.<c>";
    return name;
}
bool result(){
    char a=0;
    char b=0;
    cout <<"a: ";
    cin >> a;
    cout<<"b: ";
    cin>>b;
    if(a+10>=b){
        return true;
    }
    else return false;
}
double S_calculation(){
    double S=0;
     int x=0,y=0,z=0;
   double PI = 3.141592653589793;
   cout<<"\nX - ";
      x=check(x);
      while(x<0|| x==0){
          if(x<0 || x==0){
              cout<<"Введiть число б?льше 0";
          }
          x=check(x);
      }
      while(x<=y || y==0 || y<0){
      cout<<"Y - ";
      if(x<y || x==y || y<0){
        cout<<"Y має бути менше нiж x:  ";
      }
      y=check(y);
      }
      while(z==0 || z<0){
      cout<<"Z - ";
      if(z==0 || z<0){
        cout<<"Z має бути не вiд'ємним та бiльше 0:  ";
      }
       z=check(z);
      }
    S=log(x-y)+sqrt(PI*pow(x,2)/x+z/2*pow(y,2));
    cout<<"x: "<<hex<<x;
    cout<<"\ny: "<<hex<<y;
    cout<<"\nz: "<<hex<<z;
    cout<<"\nS: ";
    return S;
}
#endif // MODULESHARBAR_H
