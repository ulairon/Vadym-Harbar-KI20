#ifndef MODULESHARBAR_H
#define MODULESHARBAR_H
#include <iostream>
#include<math.h>
using namespace std;
string Name_of_Developer()
{
    string name;
    name="����i� 1.0\n���஡���: � � � � ��� ��������஢��.\n����, 2021 �i�.<c>";
    return name;
}
bool result(){
    int a=0;
    int b=0;
    while (!(cout <<"a: ",cin >> a && cout<<"b: ",cin>>b)){
           cout << "error\n";
           cin.clear();
           fflush(stdin);
       }
    if(a+10>=b){
        return true;
    }
    else return false;
}
double S_calculation(){
    double S=0,x=0,y=0,z=0;
    const double PI = 3.141592653589793;
    do{
        (!(cout <<"\nx: ",cin >> x && cout<<"y: ",cin>>y && cout<<"z: ",cin>>z));
           cout << "error\n";
           cin.clear();
           fflush(stdin);
    }while ( (!((x > -1 && x != 0 && y > 0))));
    S=log(x-y)+sqrt(PI*pow(x,2)/x+z/2*pow(y,2));
    return S;
}
#endif // MODULESHARBAR_H
