#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstdlib>
#include <stdio.h>
#include <string>
using namespace std;
class Human
{
public:
	Human();
	Human(string fn, string ln);
	void setFisrtName(string fn);
	void setLastName(string ln);

	string getFisrtName();
	string getLastName();
	virtual void getHuman();
	~Human();
protected:
	string firstName, lastName;
};

