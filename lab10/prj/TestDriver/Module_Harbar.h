#ifndef MODULE_HARBAR_H
#define MODULE_HARBAR_H
#include <iostream>
#include <fstream>
#include <wchar.h>
#include <fcntl.h>
#include <clocale>
#include <windows.h>
#include <codecvt>
#include <ctime>
#include<cmath>

using namespace std;
std::wifstream::pos_type filesize(const char* filename)
{
    std::wifstream in(filename, std::wifstream::ate | std::wifstream::binary);
    return in.tellg();
}
wstring author = {L"Гарбар Вадим. Версія 1.0"};
wstring poesy_struct ={L"Якщо у тебе є який талант,\n"
                       "То будуть вороги обов'язково,\n"
                       "Бо бездарі від заздрощів готові\n"
                       "Паплюжити й ганьбить все підряд.\n"};

void localization(){
    _wsetlocale(LC_ALL, L"uk_UA.UTF-8");
    _setmode(_fileno(stdout), _O_U8TEXT);
    _setmode(_fileno(stdin), _O_U8TEXT);
}
wstring Getter_Input(){
    wifstream input;
    input.imbue(locale(locale(), new codecvt_utf8_utf16<wchar_t>));
    input.open("input.txt");
    wstring line;
    wstring copys;
    while (getline(input, line))
    {
        copys+=line;
        copys.push_back('\n');
    }
    input.close();
    return copys;
}
wstring checker(wstring copys){
    wstring bigwords;
    for(int i=0; copys[i];i++){
        if(copys[i]>=L'А' && copys[i]<=L'Я'){
            bigwords += copys[i];
        }
    }
    return bigwords;
}
wstring marker(wstring copys){
    int marker=0;
    wstring check;
    for(int i=0; copys[i];i++){
        if(copys[i]==L'.' || copys[i]==L','){
            marker++;
        }
    }
    if(marker==3){
        check=L"Всі знаки відповідають оригіналу\n";
    }
    else{
        check=L"Пропущено або зайвий знак\n";
    }
    return check;
}
wstring output_structure(wstring copys){
    wstring poesy_struct ={L"Якщо у тебе є який талант,\n"
                           "То будуть вороги обов'язково,\n"
                           "Бо бездарі від заздрощів готові\n"
                           "Паплюжити й ганьбить все підряд."};
    wstring check1;
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
        check1=L"Структура відповідає оригіналу";
    }
    else{
        check1=L"Структура не відповідає оригіналу";
    }
    return check1;
}
void out(wstring bigwords,wstring check1,wstring check){
    wstring author = {L"Гарбар Вадим. Версія 1.0"};
    wofstream output;
    output.imbue(locale(locale(), new codecvt_utf8_utf16<wchar_t>));
    output.open("output.txt");
    output<<L"Ім'я розробника: "<<author<<endl<<L"Символи верхнього регістру: "<<bigwords<<endl<<L"Знаки пунктуації: "<<check<<L"Перевірка структури: "<<check1;
    output.close();
}
void module_input(){
    float i=filesize("input.txt");
    time_t cur_date=time(0);
    wofstream input2;
    input2.imbue(locale(locale(), new codecvt_utf8_utf16<wchar_t>));
    input2.open("input.txt", ios_base::app);
    input2<<endl<<L"файл input у Кб: "<<i/1024<<endl<<L"Дата дозапису: "<<ctime(&cur_date);
    input2.close();
}
int validation3(){
    int a=0;
    while (!(wcin >> a)){
        wcout <<L"Введіть число:\n";
        wcin.clear();
        fflush(stdin);
        wcout<<L"===>";
    }
    while(a<0 || a==0 ){
        if(a<0 || a==0){
            wcout<<L"Введіть число більше 0"<<endl;
            wcout<<L"===>";
            wcin.clear();
            fflush(stdin);
        }
        a=validation3();
    }
    return a;
}
void boll()
{
    wcout<<L"Введіть число"<<endl;
    wcout<<L"===>";
    wstring text;
    int a=0;
    a=validation3();
    int k=0;
    while(a) {
        k = a % 2;
        a = a / 2;
        text =to_wstring(k)+text;
    }
    wcout<<L"Число у двійковій системі: "<<text<<endl;
}
void S_calculation(){
    double S=0;
    int x=0,y=0,z=0;
    double PI = 3.141592653589793;
    wcout<<L"\nX - ";
    wcin>>x;
    while(x<0|| x==0){
        if(x<0 || x==0){
            wcout<<L"X повинно бути більше 0: ";
        }
        wcin>>x;
    }
    while(x<=y || y==0 || y<0){
        wcout<<L"Y - ";
        if(x<y || x==y || y<0){
            wcout<<L"Y повинно бути більше ніж x та більше 0:  ";
        }
        wcin>>y;
    }
    while(z==0 || z<0){
        wcout<<L"Z - ";
        if(z==0 || z<0){
            wcout<<L"z повинно бути більше 0:  ";
        }
        wcin>>z;
    }
    wcout<<"Формула розрахунку S=log(x-y)+sqrt(PI*pow(x,2)/x+z/2*pow(y,2))\b";
    S=log(x-y)+sqrt(PI*pow(x,2)/x+z/2*pow(y,2));
    wcout<<L"\nS: "<<S<<endl;
}

#endif // MODULE_HARBAR_H
