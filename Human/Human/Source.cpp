#include "Human.h"
#include "Student.h"
#include "Teacher.h"
using namespace std;

int main()
{/*Human *h = new Human("kowboy", "malboro");
	cout << "Human" << endl;
	h->getHuman();
	//h->~Human();*/
	
	string fn, ln,fn1,ln1;
	cout << "Enter first name:";
	cin >> fn;
	
	cout << "Enter last name:";
	cin >> ln;
	
	
	Student *s = new Student(fn,ln);
	s->setFisrtName(fn);
    s->setLastName(ln);
	cout << "Student" << endl;
	s->getHuman();
   	//cout << "AVERAGE: " << s->getAvgMark()<<endl;

	cout << "Enter first  teacher name:";
	cin >> fn1;

	cout << "Enter last teacher  name:";
	cin >> ln1;
	Teacher *p = new Teacher(fn, ln);
	p->setFisrtName(fn);
	p->setLastName(ln);
	cout << "Teacher" << endl;
	s->getHuman();
	cout << "average hour of working: " << p->getaverageHourOfWork()<<" hours" << endl;

	/*cout << "Human" << endl;
	h->getHuman();*/
	
	
	
	cout << "End of pragram" << endl;
	cin.get();
	system("pause");
	return 0;
}