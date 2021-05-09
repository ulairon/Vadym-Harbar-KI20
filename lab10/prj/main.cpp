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

    wstring poesy = {L"Якщо у тебе є який талант,\n"
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
    for(int i=0; poesy[i];i++){
        if(poesy[i]==L'.' || poesy[i]==L','){
            checker++;
        }
    }
    if(checker==marker){
        wcout<<L"Всі знаки відповідають оригіналу\n";
    }
    else{
        wcout<<L"Пропущено або зайвий знак\n";
    }
    if(poesy==copys){
        wcout<<L"Структура відповідає оригіналу";
    }
    else{
        wcout<<L"Структура не відповідає оригіналу";
    }
    output<<bigwords;
    input.close();
    output.close();
    return 0;
}
