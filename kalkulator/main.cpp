#include <iostream>
#include <cmath>

using namespace std;
int summa(int ,int );
int raznitsa(int ,int );
int ymnoshenia(int ,int );
float delenie(float ,float );
int main()
{
    setlocale(LC_ALL,"rus");
    cout<<"=================================Калькулятор=========================================="<<endl;
    int num1,num2;
    int suma;
    char operation;
    cout<<"Введите первое число: ";
    cin>>num1;
    cout<<"Введите второе число: ";
    cin>>num2;
    cout<<"Введите операцию: ";
    cin>>operation;
    switch(operation){
    case '+':
        cout<<"Сумма: "<<num1<<"+"<<num2<<"="<<summa(num1,num2)<<endl;
        break;
    case '-':
        cout<<"Разница: "<<num1<<"-"<<num2<<"="<<raznitsa(num1,num2)<<endl;
        break;
    case '*':
        cout<<"Умножение: "<<num1<<"*"<<num2<<"="<<ymnoshenia(num1,num2)<<endl;
        break;
    case '/':
        cout<<"Деление: "<<num1<<"/"<<num2<<"="<<round(delenie(num1,num2)*100)/100<<endl;
        break;

    }
    cout << "Конец программы!" << endl;
    return 0;
}
 int summa(int num1,int num2){
    return num1+num2;
}
 int raznitsa(int num1,int num2){
     return num1-num2;
}
int ymnoshenia(int num1,int num2){
    return num1*num2;
}
float delenie(float num1,float num2){
    return num1/num2;
}
