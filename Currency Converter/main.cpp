///05.02.2018 13:21
///Created by TSUBCHIK
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

double UA_RUB(double summa, double RUB){
    return summa*RUB;
};double UA_EURO(double summa, double EURO){
    return summa*EURO;
};
double UA_DOLLAR(double summa, double DOLLAR){
    return summa*DOLLAR;
};

int main() {
    int valuta;
    double summa;
    double RUB = 0.45;
    double EURO = 33.72;
    double DOLLAR = 27.53;
    char vibor;



    do{
        cout<<"**********Currency Converter**********"<<endl;
        cout<<"Vvedite summu: ";
        cin>>summa;
        cout<<"V kakyu valutu?"<<endl;
        cout<<"(UA - RUB) - 1"<<endl;
        cout<<"(UA - EURO) - 2"<<endl;
        cout<<"(UA - DOLLAR) - 3"<<endl;
        cin>>valuta;
        switch (valuta){
            case 1:
                cout<<"Result: "<<UA_RUB(summa,RUB)<<" RUB"<<endl;
                break;
            case 2:
                cout<<"Result: "<<UA_EURO(summa,EURO)<<" EURO"<<endl;
                break;
            case 3:
                cout<<"Result: "<<UA_DOLLAR(summa,DOLLAR)<<" DOLLAR"<<endl;
                break;
            default:
                cout<<"=======ERROR======="<<endl;
        }
        cout<<"Repped?"<<endl;
        cout<<"YES - 1"<<endl;
        cout<<"NO - 2"<<endl;
        cin>>vibor;
    }while(vibor == '1');
    cout << "END" << endl;
    return 0;
}
