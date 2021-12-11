#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

template<typename T>
class MyMas{
    T* pmas;///Т-тип данных
    int sizeMas;
public:
    MyMas(T*,int);
    void initMas();///инициализация массива
    void outMas();///вывод массива
    void sortFind();///сортировка массива поиск(выбор)
};

template<typename T>
MyMas<T>::MyMas(T*p,int sm){
    pmas=p;
    sizeMas=sm;
}

template<typename T>
void MyMas<T>::initMas(){
    for(int i=0;i<sizeMas;i++){
        pmas[i]=rand()%26+97;
    }
};

template<typename T>
void MyMas<T>::outMas(){
    for(int i=0;i<sizeMas;i++){
        cout<<i<<"\t"<<pmas[i]<<endl;
    }
};

template<typename T>
void MyMas<T>::sortFind(){
    int maxPos;
    T temp;
    for(int i=0;i<sizeMas;i++){
        maxPos=i;
        for(int j=i+1;j<sizeMas;j++){
            if(pmas[maxPos]<pmas[j]){
                maxPos=j;
            }
            temp=pmas[i];
            pmas[i]=pmas[maxPos];
            pmas[maxPos]=temp;
        }
    }
};

int main()
{
    srand(time(NULL));
    int sm=10;
    double *p=new double[sm];
    MyMas<double>mm(p,sm);
    cout<<"without initilization"<<endl;
    mm.outMas();
    cout<<"===================================="<<endl;
    mm.initMas();
    cout<<"with initilization"<<endl;
    mm.outMas();
    cout<<"===================================="<<endl;
    cout<<"after sort: "<<endl;
    mm.sortFind();
    mm.outMas();

    delete []p;//чистим весь массив
    ///delete p;// чистим первый елемент


    cout << "Hello world!" << endl;
    return 0;
}


