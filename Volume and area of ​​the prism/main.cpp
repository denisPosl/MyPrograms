#include <iostream>
#include <cmath>
#include <locale>
#include <string>
using namespace std;
class Treygolnik{
protected:
    double a;///сторона равнобедренного треугольника
    double b;///основа равнобедренного треугольника

public:
    Treygolnik(double A,double B){
        a=A;
        b=B;
    };
    double CalcS(double B,double A,double H){///площадь основания
        return B/4 * pow(4*pow(A,2)-pow(B,2),0.5);
    }
    double CalcP(double B, double A){///периметр основания
        return (2*a)+b ;
    }
};
class Prizma:public Treygolnik{
    double h;///выстота призмы
public:
    Prizma(double h,double A,double B);
    static  double CalckS(double H, double A,double B,double  c,double y){///площадь полной поверхности
        c=((2*A) +B)*H;///площадь боковой поверхности
        y=(B/4 * pow(4*pow(A,2)-pow(B,2),0.5));///площадь основания
        return c+2*y;
    };
    static double CalckV(double H,double A,double B,double d){///обьем ///static - переменная хранящая после инициализации свое значение до конца работы программы

        d=(B/4 * pow(4*pow(A,2)-pow(B,2),0.5));///площа основания
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
    cout<<"***********Поиск площади и периметра осноания призмы, а так же её объём и площадь поверхности***********"<<endl;
    cout<<"Основание призмы  равнобедреный треугольник        "<<endl;

    cout<<"       **   " <<endl;
    cout<<"      *  *             а- боковая сторона равнобедренного треугольника" <<endl;
    cout<<"     *    *            b- основание равнобедренного треугольника"<<endl;
    cout<<" a  *      *  a    "<<endl;
    cout<<"   *        *     "<<endl;
    cout<<"  ************    "<<endl;
    cout<<"        b  "<<endl;
    cout<<"====================================="<<endl;
    cout<<"Введите а: ";
    cin>>a;
    cout<<"Введите b: ";
    cin>>b;
    cout<<"Введите h(высота призмы): ";
    cin>>h;
    try{
        if(a<=0||2*a<b||b<=0||h<=0)
        {
            throw 123;
        }
        Treygolnik qm(a,b);
        Treygolnik Prizma1();
        cout<<""<<endl;
        cout<<"Периметр основания: "<<qm.CalcP(b,a)<<endl;
        cout<<"Площадь основани: "<<qm.CalcS(b,a,h)<<endl;
        cout<<""<<endl;
        cout<<"Площадь поверхности: "<<Prizma::CalckS(h,a,b,c,y)<<endl;
        cout<<"Обьем призмы: "<<Prizma::CalckV(h,a,b,d)<<endl;

    }
    catch(int a){
        cout<<"Ошибка,введенное число меньше нуля либо суммма боковых сторон меньше основания!"<<endl;
    }
    cout<<""<<endl;
    cout << "Конец программы" << endl;
    return 0;
}
