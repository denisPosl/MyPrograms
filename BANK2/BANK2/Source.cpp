#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstdlib>
#include <stdio.h>
#include <string>
using namespace std;
class BankAccount {
private:
	 int id[10];//parol
	 //string name;//username
	 double balans;//������� �� ����� kesh
	 
	 
public:
	 BankAccount(int parol/*, string userName*/, double kesh) {
		balans = kesh;
		id[10] = parol;
		//name = userName;
	 }
	 
	 void getInfo(string username/*,double parol*/) {
	 cout<<"������� ���� ���: ";
	 cin >> username;
	 cout <<"�����������,"<<username<<endl /*" Enter your parol,please:"*/;
	 //cin >> parol;
	 //cout << username<<" Your balans: " << balans<< endl;
	};
	
	 void addBalans(double vvod) {//���������� ����� �� ����
		 cout << "������� �� ������ �������� �� ����: " << endl;
		 cin >> vvod;  
		 cout << "��� ������ ����� ����������: "<< balans + vvod<<endl ;
		 balans= balans + vvod;
	 };
	 void takeOffBalans( double vuvod) { //������ ����� �� �����
		 cout << "������� �� ������ ����� �������: " << endl;
		 cin >> vuvod;
		 cout << "��� ������ ����� ������: " << balans - vuvod<<endl ;
		 balans= balans - vuvod;
	 };
};



 
int main()
{
	cout << "=================Privat Bank=================" << endl;
	setlocale(LC_ALL, "Rus");
	int vubor1,vubor3;
	double kesh;
    srand(time(NULL));
	kesh = rand() % 10000;
	string userName; 
    int parol=259;
	double vvod=0,vuvod=0;
    BankAccount Bank(parol/*,userName*/, kesh);
    cout << "������� ��� ������: ";
	cin >> parol;
	//do {
		if (parol == 259) {
			Bank.getInfo(userName/*,parol*/);
			cout << "              �������� ��������          " << endl;
			do {
				cout << "������-1              ����� ��������-3" << endl <<
					    "��������� ����-2      ��������� ������-4" << endl;
                cin >> vubor3;
            switch (vubor3) {
			case 1:
				cout << "�� ����� �����: " << kesh << endl;
				break;
			case 2:
				Bank.addBalans(kesh);
				break;
			case 3:
				Bank.takeOffBalans(kesh);
				break;
			case 4:
				cout << "���������� ������ ...." << endl;

			}
			cout << "==========================================" << endl;
			} while (vubor3 != 4);
			
			
		}

			/*cout << "������� (1) ���� �� ������ �������� �������� �� ���� � (2) ���� - ����� " << endl;
			cin >> vubor1;
			if (vubor1 == 1) {  }
			else {  }

		}
		else {
			cout << "�������� ������" << endl;
		}
		cout << "1-����������,2-��������� ������" << endl;
		cin >> vubor2;*/
		//} while (vubor3 != 4);
		cin.get();
		system("pause");
		return 0;
}
	

