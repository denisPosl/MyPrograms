#include <iostream>

using namespace std;
double convert_1 (double ,double );
double convert_2 (double ,double );
double convert_3 (double ,double );
int main()
{
    setlocale(LC_ALL,"rus");
    cout<<"===================��������� �����=========================="<<endl;
    double UAH_in_USD=27.50;
    double UAH_in_RUB=0.42;
    double UAH_in_EUR=33.78;
    int vubor;
    char vubor2;
    double suma;
    do{
    cout<<"����� ������ ������"<<endl;
    cout<<"��� �������� ������ � ������� ������� - 1"<<endl;
    cout<<"������ � ����-2"<<endl;
    cout<<"������ � �����-3"<<endl;
    cin>>vubor;
    cout<<"������� ����� ����� ?"<<endl;
    cin>>suma;
    switch(vubor){
    case 1:
        cout<<"������ � �������:"<<suma<<"��������"<<" = "<<convert_1(suma,UAH_in_USD)<<"������"<<endl;
        break;
    case 2:
        cout<<"������ � ����:"<<suma<<"����"<<" = "<<convert_2(suma,UAH_in_EUR)<<"������"<<endl;
        break;
    case 3:
        cout<<"������ � �����:"<<suma<<"������"<<" = "<<convert_2(suma,UAH_in_RUB)<<"������"<<endl;
        break;
        }
        cout<<"====================================="<<endl;

    cout<<"������� 1 ��� �� ���������� � 2 ����� ����� "<<endl;
    cin>>vubor2;
    }
    while(vubor2=='1');
    cout << "�����" << endl;
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
