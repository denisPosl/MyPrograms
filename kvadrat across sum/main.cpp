#include <iostream>
#include <cmath>
using namespace std;
namespace number{
    void funk(int );
}

int main()
{
    int chislo;
    cout<<"Enter your number: ";
    cin>>chislo;
    try{
    if(chislo==2 || chislo==9){
        throw 123;
      }
       number::funk(pow(chislo,2));
    }
    catch(int i){
        cout<<"Error,enter another numder: "<<endl;
    }

    cout << "End of program!" << endl;
    return 0;
}
void number::funk(int chislo2){

    int i=1, sumaI=1;
    cout<<"1";///1 ������ 0 ��������
    while(1)
    {
        if(sumaI>=chislo2) break;///���� ����� � ������ ��� ����� � �������� - ����,���� ����� ������,�� ���� �������������
          i+=2;
          sumaI+=i;
          cout<<"+"<<i;
    }
    cout<<"="<<sumaI<<endl;
}
