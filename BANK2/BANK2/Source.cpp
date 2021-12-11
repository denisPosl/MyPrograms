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
	 double balans;//сколько на счету kesh
	 
	 
public:
	 BankAccount(int parol/*, string userName*/, double kesh) {
		balans = kesh;
		id[10] = parol;
		//name = userName;
	 }
	 
	 void getInfo(string username/*,double parol*/) {
	 cout<<"Введите ваше имя: ";
	 cin >> username;
	 cout <<"Здраствуйте,"<<username<<endl /*" Enter your parol,please:"*/;
	 //cin >> parol;
	 //cout << username<<" Your balans: " << balans<< endl;
	};
	
	 void addBalans(double vvod) {//добавление денег на счет
		 cout << "Сколько вы хотите добавить на счет: " << endl;
		 cin >> vvod;  
		 cout << "Ваш баланс после пополнения: "<< balans + vvod<<endl ;
		 balans= balans + vvod;
	 };
	 void takeOffBalans( double vuvod) { //снятие денег со счета
		 cout << "Сколько вы хотите снять средств: " << endl;
		 cin >> vuvod;
		 cout << "Ваш баланс после снятия: " << balans - vuvod<<endl ;
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
    cout << "Введите ваш пароль: ";
	cin >> parol;
	//do {
		if (parol == 259) {
			Bank.getInfo(userName/*,parol*/);
			cout << "              Выберите действие          " << endl;
			do {
				cout << "Баланс-1              Снять средства-3" << endl <<
					    "Пополнить счет-2      Завершить работу-4" << endl;
                cin >> vubor3;
            switch (vubor3) {
			case 1:
				cout << "На вашем счету: " << kesh << endl;
				break;
			case 2:
				Bank.addBalans(kesh);
				break;
			case 3:
				Bank.takeOffBalans(kesh);
				break;
			case 4:
				cout << "Завершение работы ...." << endl;

			}
			cout << "==========================================" << endl;
			} while (vubor3 != 4);
			
			
		}

			/*cout << "Введите (1) если вы хотите добавить средства на счет и (2) если - снять " << endl;
			cin >> vubor1;
			if (vubor1 == 1) {  }
			else {  }

		}
		else {
			cout << "Неверный пароль" << endl;
		}
		cout << "1-продолжить,2-завершить работу" << endl;
		cin >> vubor2;*/
		//} while (vubor3 != 4);
		cin.get();
		system("pause");
		return 0;
}
	

