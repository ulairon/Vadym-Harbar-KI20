#include <iostream>
#include <fstream>
#include <wchar.h>
#include <fcntl.h>
#include <clocale>
#include <windows.h>
#include <codecvt>

using namespace std;

int main()
{
    _wsetlocale(LC_ALL, L"uk_UA.UTF-8");
    _setmode(_fileno(stdout), _O_U8TEXT);
    _setmode(_fileno(stdin), _O_U8TEXT);
    wstring poesy_struct ={L"Якщо у тебе є який талант,\n"
                           "То будуть вороги обов'язково,\n"
                           "Бо бездарі від заздрощів готові\n"
                           "Паплюжити й ганьбить все підряд.\n"};
    wstring author = {L"Гарбар Вадим.\nВерсія 1.0"};
    wifstream input;
    wofstream output;
    input.imbue(locale(locale(), new codecvt_utf8_utf16<wchar_t>));
    output.imbue(locale(locale(), new codecvt_utf8_utf16<wchar_t>));
    input.open("input.txt");
    output.open("output.txt");
    int marker=0;
    int checker=0;
    wstring line;
    wstring copys;
    wstring bigwords;
    while (getline(input, line))
    {
        copys+=line;
        copys.push_back('\n');
    }
    for(int i=0; copys[i];i++){
        if(copys[i]>=L'А' && copys[i]<=L'Я'){
            bigwords += copys[i];
        }
        if(copys[i]==L'.' || copys[i]==L','){
            marker++;
        }
    }
    for(int i=0; poesy_struct[i];i++){
        if(poesy_struct[i]==L'.' || poesy_struct[i]==L','){
            checker++;
        }
    }
    if(checker==marker){
        wcout<<L"Всі знаки відповідають оригіналу\n";
    }
    else{
        wcout<<L"Пропущено або зайвий знак\n";
    }
    for(int i=0; poesy_struct[i];i++){
        if((poesy_struct[i]>=L'А' && poesy_struct[i]<=L'Я') || (poesy_struct[i]>=L'A' && poesy_struct[i]<=L'Z')){
            poesy_struct[i]=L'0';
        }
        if(((poesy_struct[i]>=L'а' && poesy_struct[i]<=L'я') || (poesy_struct[i]==L'і' || poesy_struct[i]==L'є')) || (poesy_struct[i]>=L'a' && poesy_struct[i]<=L'z')){
            poesy_struct[i]=L'0';
        }
    }
     for(int i=0; copys[i];i++){
         if((copys[i]>=L'А' && copys[i]<=L'Я') || (copys[i]>=L'A' && copys[i]<=L'Z')){
              copys[i]=L'0';
         }
         if(((copys[i]>=L'а' && copys[i]<=L'я') || (copys[i]==L'і' || copys[i]==L'є')) || (copys[i]>=L'a' && copys[i]<=L'z')){
             copys[i]=L'0';
    }
     }
     if(poesy_struct==copys){
         wcout<<L"Структура відповідає оригіналу";
     }
     else{
         wcout<<L"Структура не відповідає оригіналу";
     }
    wcout<<endl;
    wcout<<copys;
     wcout<<endl;
     wcout<<poesy_struct;
    output<<bigwords;
    input.close();
    output.close();
    return 0;
}
