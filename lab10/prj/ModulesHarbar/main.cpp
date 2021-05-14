#include <iostream>
#include "Module_Harbar.h"

using namespace std;

int main()
{
    localization();
    wstring copys;
    wstring bigword;
    wstring check;
    wstring check1;
    wchar_t checkbox=0;
    while(true){
        wcout<<author<<endl;
        wcout<<L"---------Виберіть дію----------\n";
        wcout<<L"Введіть a для перевірки структури та підрахунку кількості знаків пуннктуації\n";
        wcout<<L"Введіть b для дозапису інформації у файл\n";
        wcout<<L"Для виконання функції переводу у двійкову систему введіть c\n";
        wcout<<L"Введіть d для виконання s_calculation\n";
        wcout<<L"Введіть x для виходу із программи\n";
        wcout<<L"==========>";
        wcin>>checkbox;
        switch (checkbox) {
        case 'a':
        {
            wcout<<L"Для коректної роботи застусунку створіть у папці з exe файлом текстовий файл input та введіть данний вірш та повторно запустіть застосунок.\nПісля завершення виконання у файлі output буде результат виконання\n"<< poesy_struct;
            copys=Getter_Input();
            bigword=checker(copys);
            check=marker(copys);
            check1=output_structure(copys);
            out(bigword,check1,check);
            break;
        }
        case 'b':
        {
            wcout<<"Дозапис було створено у файлі input.Для коректної роботи функції (а) видаліть дозапис після перегляду";
            module_input();
            break;
        }
        case 'c':
        {
            boll();
            break;
        }
        case 'd':
        {
            S_calculation();
            break;
        }
        case 'x':
        {
            return 0;
            break;
        }
        }
    }
    system("pause");
    getchar();
    return 0;
}

