#include "Student.h"


Student::Student()
{
}

Student::Student(string fn, string ln)
{
	srand(time(NULL));
	for (int i = 0; i < 5; i++) {
		this->marks.push_back(rand() % 12 + 1);
	}
}

double Student::getAvgMark()
{
	int summ = 0;
	for (int i = 0; i < this->marks.size(); i++) {
		summ += this->marks[i];
	}
	double avg =(double)summ/this->marks.size() ;
	return avg;
}

void Student::getHuman()
{
	cout << "First name: " << this->firstName <<
		endl << "last name: " << this->lastName <<
		endl << "AVERAGE mark: " << this->getAvgMark() << endl;

}


Student::~Student()
{
}
