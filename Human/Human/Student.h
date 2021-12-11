#pragma once
#include "Human.h"
#include <vector>
class Student :
	public Human
{
public:
	Student();
	Student(string fn, string ln);
	double getAvgMark();
	void getHuman() override;
	~Student();
private:
	vector<int>marks;
};

