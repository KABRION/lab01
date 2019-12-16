#pragma once
#include "student.h"

class StudentGroup
{
public:
	

	StudentGroup(std::string groupName,unsigned int groupID) 
		: groupName_(groupName), groupID_(groupID) {}

	StudentGroup(std::string groupName, unsigned int groupID, unsigned int minAge, double minRating, int studentsMax)
		: groupName_(groupName), groupID_(groupID), minAge_(minAge), minRating_(minRating), studentsMax_(studentsMax){}


	const Student* getStudent(const std::string& _firstName, const std::string& _secondName);
	std::string getGroupName();
	double getMinRating();
	size_t getStudentsQty();
	int getGroupID();
	int getMinAge();

	void addStudent(Student* student);
	void deleteStudent(Student* student);

	void setGroupName(const std::string& groupName);
	void setGroupID(const unsigned int& groupID);
	void setMinAge(const unsigned int& age);
	void setMinRating(const double& rating);
	void setStudentsMax(const double& rating);
	
	void sortWithName();
	void sortWithRating();

	void checkGroups();
	void printGroup();

private:
	std::string groupName_;
	unsigned int groupID_;
	unsigned int minAge_ = 0;
	double minRating_ = 0.0;
	int studentsMax_ = 10;

	std::vector<Student*> students;

	bool findStudent(Student* student);
	bool checkStudent(Student* student);

};