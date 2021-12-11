#include <iostream>
#include <cmath>
#include <locale>
#include <string>
using namespace std;
class Treygolnik{
protected:
    double a;///������� ��������������� ������������
    double b;///������ ��������������� ������������

public:
    Treygolnik(double A,double B){
        a=A;
        b=B;
    };
    double CalcS(double B,double A,double H){///������� ���������
        return B/4 * pow(4*pow(A,2)-pow(B,2),0.5);
    }
    double CalcP(double B, double A){///�������� ���������
        return (2*a)+b ;
    }
};
class Prizma:public Treygolnik{
    double h;///������� ������
public:
    Prizma(double h,double A,double B);
    static  double CalckS(double H, double A,double B,double  c,double y){///������� ������ �����������
        c=((2*A) +B)*H;///������� ������� �����������
        y=(B/4 * pow(4*pow(A,2)-pow(B,2),0.5));///������� ���������
        return c+2*y;
    };
    static double CalckV(double H,double A,double B,double d){///����� ///static - ���������� �������� ����� ������������� ���� �������� �� ����� ������ ���������

        d=(B/4 * pow(4*pow(A,2)-pow(B,2),0.5));///����� ���������
        return d*H;
    };
};
Prizma::Prizma(double H, double A, double B):Treygolnik(A,B){};
int main()
{
    double a,b,h,c,d,y;
    Treygolnik q(a,b);
    Treygolnik Prizma1();
    setlocale(LC_ALL,"Russian");
    cout<<"***********����� ������� � ��������� �������� ������, � ��� �� � ����� � ������� �����������***********"<<endl;
    cout<<"��������� ������  ������������� �����������        "<<endl;

    cout<<"       **   " <<endl;
    cout<<"      *  *             �- ������� ������� ��������������� ������������" <<endl;
    cout<<"     *    *            b- ��������� ��������������� ������������"<<endl;
    cout<<" a  *      *  a    "<<endl;
    cout<<"   *        *     "<<endl;
    cout<<"  ************    "<<endl;
    cout<<"        b  "<<endl;
    cout<<"====================================="<<endl;
    cout<<"������� �: ";
    cin>>a;
    cout<<"������� b: ";
    cin>>b;
    cout<<"������� h(������ ������): ";
    cin>>h;
    try{
        if(a<=0||2*a<b||b<=0||h<=0)
        {
            throw 123;
        }
        Treygolnik qm(a,b);
        Treygolnik Prizma1();
        cout<<""<<endl;
        cout<<"�������� ���������: "<<qm.CalcP(b,a)<<endl;
        cout<<"������� ��������: "<<qm.CalcS(b,a,h)<<endl;
        cout<<""<<endl;
        cout<<"������� �����������: "<<Prizma::CalckS(h,a,b,c,y)<<endl;
        cout<<"����� ������: "<<Prizma::CalckV(h,a,b,d)<<endl;

    }
    catch(int a){
        cout<<"������,��������� ����� ������ ���� ���� ������ ������� ������ ������ ���������!"<<endl;
    }
    cout<<""<<endl;
    cout << "����� ���������" << endl;
    return 0;
}
