#pragma once
#include "Human.h"
#include <vector>
class Teacher :
	public Human
{
public:
	Teacher();
	Teacher(string ln, string fn);
	double getaverageHourOfWork();
	~Teacher();
private:
	vector<int>hours;
};

