#include <iostream>
#include<windows.h>
#include"ModuleHarbar.h"

using namespace std;

int main()
{
    SetConsoleCP(866);
    SetConsoleOutputCP(866);
    cout << Name_of_Developer() << endl;
    cout<<"����i�� � i � ���᪠�� enter, 鮡 ��ॢi�� i�⨭�i��� ��ࠧ� a+10>=b"<<endl;
    cout<< result();
    cout<<endl<<"���᫨� ��ࠧ ln(x-y)+�?*x^2/x+z/2*y^2 (x,y,z ������� �����㢠�): ";
    cout<<S_calculation()<<endl;
    system("pause");
    getchar();
    return 0;
    }
