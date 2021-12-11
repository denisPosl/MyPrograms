#include "Human.h"



Human::Human()
{
	
}

Human::Human(string fn, string ln)
{
	this->firstName = fn;
	this->lastName = ln;
}

void Human::setFisrtName(string fn)
{
	this->firstName = fn;

}

void Human::setLastName(string ln)
{
	this->lastName = ln;
}

string Human::getFisrtName()
{
	return this->firstName;
}

string Human::getLastName()
{
	return this->lastName;
}

void Human::getHuman()
{
	cout << "First name: " << this->firstName <<
		endl << "last name: " << this->lastName << endl;
}


Human::~Human()
{
}
