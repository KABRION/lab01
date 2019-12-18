#include "student.h"

int Student::getId()
{
	return id_;
}

std::string Student::getFirstName()
{
	return firstName_;
}

std::string Student::getSecondName()
{
	return secondName_;
}

std::string Student::getParentName()
{
	return parentName_;
}

int Student::getStudentCourse()
{
	return studentCourse_;
}

int Student::getStudentAge()
{
	return studentAge_;
}

double Student::getStudentRating()
{
	return averageRating_;
}



void Student::setStudentAge(const unsigned int& _age)
{
	studentAge_ = _age;
}

void Student::setFirstName(const std::string& _firstName)
{
	firstName_ = _firstName;
}

void Student::setSecondName(const std::string& _secondName)
{
	secondName_ = _secondName;
}

void Student::setParentName(const std::string& _parentName)
{
	parentName_ = _parentName;
}

void Student::setPersonalRating(const double& _rating)
{
	averageRating_ = _rating;
}

void Student::addGroupQty()
{
	groupQty_++;
}

void Student::redGroupQty()
{
	groupQty_--;
}