#include <iostream>

using namespace std;
class CalcDistance{
    double s;
    double v;
    double t;
public:
    void CalcD();
    CalcDistance(double,double);//konstryctor
    double getS(){// shob posmotret v s
        return s;
        };
 };
void CalcDistance::CalcD(){
    s=v*t;
};
CalcDistance::CalcDistance(double myV,double myT){
    v=myV;
    t=myT;
};

int main()
{
    double time,speed;
    cout<<"=============Distance calculator============="<<endl;
    cout<<"enter time: ";
    cin>>time;
    cout<<"enter speed: ";
    cin>>speed;
    CalcDistance cd(speed,time);
    cd.CalcD();
    cd.getS();
    cout<<"distance: "<<cd.getS()<<endl;
    cout << "End of prog" << endl;
    return 0;
}
