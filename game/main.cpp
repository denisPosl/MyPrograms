#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstdlib>
#include <stdio.h>
using namespace std;

int main()
{
    int n,m,i;
    srand (time(NULL));
    int vibor;
    int arr1[n],arr2[n];
    int sumUser=0;
    int sumComp=0;
    cout<<"1 - play 2 - end"<<endl;
    cin>>vibor;

  if(vibor==1){

    cout<<"enter size: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
            arr1[i]=rand()%6+1;
            cout<<"kidok user: "<<arr1[i]<<endl;
            sumUser+=arr1[i];
    }
    cout <<"sumUser is: "<<sumUser<<endl;

    cout<<"============================="<<endl;

    for(int i=1;i<=n;i++){
            arr2[i]=rand()%6+1;
            cout<<"kidok comp: "<<arr2[i]<<endl;
            sumComp+=arr2[i];

    }
    cout <<"sumComp is: "<<sumComp<<endl;
    cout<<"============================="<<endl;
    if(sumUser>sumComp)
        cout<<"you win"<<endl;
    else if(sumUser==sumComp)
        cout<<"nitchya"<<endl;
    else
        cout<<"you lose"<<endl;

     }
    cout << "END" << endl;
    return 0;
}
