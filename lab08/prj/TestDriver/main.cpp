#include <iostream>
#include<windows.h>
#include"ModuleHarbar.h"

using namespace std;

int main()
{
    SetConsoleCP(866);
    SetConsoleOutputCP(866);
    cout << Name_of_Developer() << endl;
    cout<<"Введiть а i б натискаючи enter, щоб перевiрити iстиннiсть виразу a+10>=b"<<endl;
    cout<< result();
    cout<<endl<<"обчислити вираз ln(x-y)+√?*x^2/x+z/2*y^2 (x,y,z вводить користувач): ";
    cout<<S_calculation()<<endl;
    system("pause");
    getchar();
    return 0;
    }
