#include <iostream>
#include <cmath>
#include <locale>
#include <string>
using namespace std;
class PandS{
    double p;
    double s;
    double a;
    double b;
public:
    void Perumetr();
    PandS(double,double);
    double getS(){
        return s;
    };

    void Plosha();
    double getP(){
        return p;
    };
};
void PandS::Perumetr(){
    p=(a*2)+b;
};
void PandS::Plosha(){
    s=b/4 * pow(4*pow(a,2)-pow(b,2),0.5);
};
PandS::PandS(double myA,double myB){
    a=myA;
    b=myB;
};
int main()
{
    setlocale(LC_ALL,"Russian");
    double a,b;
    cout<<"==============������� � �������� ��������������� ������������==============" <<endl;
    cout<<"       **   " <<endl;
    cout<<"      *  *             �- ������� �������  " <<endl;
    cout<<"     *    *            b- ���������  "<<endl;
    cout<<" a  *      *  a    "<<endl;
    cout<<"   *        *     "<<endl;
    cout<<"  ************    "<<endl;
    cout<<"        b  "<<endl;
    cout<<"====================================="<<endl;
    cout<<"������� �: ";
    cin>>a;
    cout<<"������� b: ";
    cin>>b;
    try{
        if(a<=0||2*a<b||b<=0)
        {
            throw 123;
        }
        PandS cd(a,b);
        cd.Perumetr();
        cd.Plosha();
        cd.getS();
        cd.getP();
        cout<<"�������: "<<cd.getS()<<endl;
        cout<<"��������: "<<cd.getP()<<endl;
    }
    catch(int a){
        cout<<"������,��������� ����� ������ ���� ���� ������ ������� ������ ������ ���������!"<<endl;
    }
    cout << "����� ���������" << endl;


    return 0;
}
