#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;

template<typename T>
class MyMas{
    T* pmas;///“-тип данных
    int sizeMas;
    T maxElem;


public:
    MyMas(T*,int);
    void initMas();///инициализаци€ массива
    void outMas();///вывод массива
    double MaxNeparElem();
};

template<typename T>
MyMas<T>::MyMas(T*p,int sm){
    pmas=p;
    sizeMas=sm;
}

template<typename T>
void MyMas<T>::initMas(){
    for(int i=0;i<sizeMas;i++){
        pmas[i]=rand()%10;
    }
};

template<typename T>
void MyMas<T>::outMas(){
    for(int i=0;i<sizeMas;i++){
        cout<<pmas[i]<<endl;
    }
};

template<typename T>
double MyMas<T>::MaxNeparElem(){
    maxElem=pmas[0];
    for(int i=2;i<sizeMas;i+=2){
        if(pmas[i]>maxElem){
             maxElem=pmas[i];
        }
}
    return maxElem;
};
int main()
{
    srand(time(NULL));
    int sm;
    cout<<"Enter size of mas: ";
    cin>>sm;
    cout<<"=======================double===================="<<endl;
    double *p=new double[sm];
    MyMas<double>mm(p,sm);
    mm.initMas();
    mm.outMas();
    cout<<"Max element: "<<mm.MaxNeparElem()<<endl;
    //delete []p;
    cout<<"========================int======================="<<endl;
    int *pp=new int[sm];
    MyMas<int>mm1(pp,sm);
    mm.initMas();
    mm.outMas();
    cout<<"Max element: "<<mm.MaxNeparElem()<<endl;
    delete []p;
    cout << "End of prog" <<endl;
    return 0;
}
