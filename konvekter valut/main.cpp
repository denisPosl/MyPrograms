#include <iostream>

using namespace std;
double convert_1 (double ,double );
double convert_2 (double ,double );
double convert_3 (double ,double );
int main()
{
    setlocale(LC_ALL,"rus");
    cout<<"===================Конвектор валют=========================="<<endl;
    double UAH_in_USD=27.50;
    double UAH_in_RUB=0.42;
    double UAH_in_EUR=33.78;
    int vubor;
    char vubor2;
    double suma;
    do{
    cout<<"Какую валюту хотите"<<endl;
    cout<<"Для перевода гривны в доллары нажмите - 1"<<endl;
    cout<<"Гривны в евро-2"<<endl;
    cout<<"Гривны в рубли-3"<<endl;
    cin>>vubor;
    cout<<"Сколько нужно денег ?"<<endl;
    cin>>suma;
    switch(vubor){
    case 1:
        cout<<"Гривны в доллары:"<<suma<<"долларов"<<" = "<<convert_1(suma,UAH_in_USD)<<"гривен"<<endl;
        break;
    case 2:
        cout<<"Гривны в евро:"<<suma<<"евро"<<" = "<<convert_2(suma,UAH_in_EUR)<<"гривен"<<endl;
        break;
    case 3:
        cout<<"Гривны в рубли:"<<suma<<"рублей"<<" = "<<convert_2(suma,UAH_in_RUB)<<"гривен"<<endl;
        break;
        }
        cout<<"====================================="<<endl;

    cout<<"Нажмите 1 что бы продолжить и 2 чтобы выйти "<<endl;
    cin>>vubor2;
    }
    while(vubor2=='1');
    cout << "Конец" << endl;
    return 0;
}
double convert_1 (double suma,double UAH_in_USD){
    return suma*UAH_in_USD;
};
double convert_2 (double suma,double UAHinEUR){
    return suma*UAHinEUR;
};
double convert_3 (double suma,double UAHinRUB){
    return suma*UAHinRUB;
};
