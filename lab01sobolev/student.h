#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <array>
#include <iomanip>



class Student
{
public:


	Student(int id, std::string firstName, std::string secondName, std::string parentName, int studentCourse, int studentAge, double averageRating)
		: id_(id), firstName_(firstName), secondName_(secondName), parentName_(parentName), studentCourse_(studentCourse), studentAge_(studentAge), averageRating_(averageRating) {}


	int getId();
	std::string getFirstName();
	std::string getSecondName();
	std::string getParentName();
	int getStudentCourse();
	int getStudentAge();
	double getStudentRating();


	void setStudentAge(const unsigned int& age);
	void setFirstName(const std::string& firstName);
	void setSecondName(const std::string& secondName);
	void setParentName(const std::string& parentName);
	void setPersonalRating(const double& rating);

	void addGroupQty();
	void redGroupQty();

private:

	unsigned int id_;

	std::string firstName_;
	std::string secondName_;
	std::string parentName_;

	unsigned int studentCourse_;
	unsigned int studentAge_;
	double averageRating_;
	unsigned int groupQty_ = 0;


};