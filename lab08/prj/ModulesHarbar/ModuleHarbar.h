#ifndef MODULESHARBAR_H
#define MODULESHARBAR_H
#include <iostream>
#include<math.h>
using namespace std;
string Name_of_Developer()
{
    string name;
    name="Версiя 1.0\nРозробник: Гарбар Вадим Володимирович.\nЦНТУ, 2021 рiк.<c>";
    return name;
}
bool result(){
    int a=0;
    int b=0;
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    if(a+10>=b){
        return true;
    }
    else return false;
}
double S_calculation(){
    double S=0,x=0,y=0,z=0;
    const double PI = 3.141592653589793;
    cout<<endl<<"x: ";
    cin>>x;
    cout<<"y: ";
    cin>>y;
    cout<<"z: ";
    cin>>z;
    S=log(x-y)+sqrt(PI*pow(x,2)/x+z/2*pow(y,2));
    return S;
}
#endif // MODULESHARBAR_H
