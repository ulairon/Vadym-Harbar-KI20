#include <iostream>
#include<windows.h>
#include "ModulesHarbar.h"

using namespace std;

int main()
{
    cout<<Name_of_Developer();
    char checkbox=0;
    while (true){
        cout<<"����i�� k ��� ��������� S_calculation"<<endl;
        cout<<"����i�� h ��� ஧��㭪� ��������"<<endl;
        cout<<"����i�� g ��� ஧��㭪� ᨫ� �i���"<<endl;
        cout<<"����i�� f ��� ஧��㭪� �i�쪮��i �i�i�"<<endl;
        cout<<"����i�� �� ���i� c,d,D ��� ��室� i� �ணࠬ�"<<endl;
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
