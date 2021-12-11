#include "Teacher.h"



Teacher::Teacher()
{
}

Teacher::Teacher(string ln, string fn)
{
	srand(time(NULL));
	for (int i = 0; i < 5; i++) {
		this->hours.push_back(rand() %100);
	}
}

double Teacher::getaverageHourOfWork()
{
	int time = 0;
	for (int i = 0; i < this->hours.size(); i++) {
		time += this->hours[i];
	}
	double hours = (double)time / this->hours.size();
	return hours;
}


Teacher::~Teacher()
{
}
