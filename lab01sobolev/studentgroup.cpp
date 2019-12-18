#include "studentgroup.h"

bool StudentGroup::findStudent(Student* student)
{
	for (auto i : students)
	{
		if (i == student)
			return true;
	}

	return false;
}

bool StudentGroup::checkStudent(Student* student)
{
	if (student->getStudentAge() >= getMinAge() && student->getStudentRating() >= getMinRating())
		return true;

	return false;
}

const Student* StudentGroup::getStudent(const std::string& _firstName, const std::string& _secondName)
{
	for (const auto i : students)
	{
		if (i->getFirstName() == _firstName && i->getSecondName() == _secondName)
			return i;
	}
	return nullptr;
}

std::string StudentGroup::getGroupName()
{
	return groupName_;
}

double StudentGroup::getMinRating()
{
	return minRating_;
}

size_t StudentGroup::getStudentsQty()
{
	return students.size();
}

int StudentGroup::getGroupID()
{
	return groupID_;
}

int StudentGroup::getMinAge()
{
	return minAge_;
}

void StudentGroup::setGroupName(const std::string& _groupName)
{
	groupName_ = _groupName;
}

void StudentGroup::setGroupID(const unsigned int& _groupID)
{
	groupID_ = _groupID;
}

void StudentGroup::setMinAge(const unsigned int& _age)
{
	minAge_ = _age;
}

void StudentGroup::setMinRating(const double& _rating)
{
	minRating_ = _rating;
}

void StudentGroup::setStudentsMax(const double& studentsMax)
{
	studentsMax_ = studentsMax;
}

void StudentGroup::addStudent(Student* student)
{
	if (getStudentsQty() >= studentsMax_)
		return;

	if (findStudent(student))
		return;

	if (!checkStudent(student))
		return;

	students.push_back(student);
	student->addGroupQty();
}

void StudentGroup::deleteStudent(Student* student)
{
	for (auto it = students.begin(); it < students.end(); ++it)
	{
		if (*it == student)
		{
			students.erase(it);
			student->redGroupQty();
			return;
		}
	}
}

void StudentGroup::sortWithName()
{
	sort(students.begin(), students.end(), [](Student* s1, Student* s2)
		{
			return s1->getSecondName() < s2->getSecondName();
		});
}

void StudentGroup::sortWithRating()
{
	sort(students.begin(), students.end(), [](Student* s1, Student* s2)
		{
			return s1->getStudentRating() > s2->getStudentRating();
		});
}

void StudentGroup::checkGroups()
{
	for (auto i : students)
	{
		if (i->getStudentAge() < getMinAge())
			deleteStudent(i);

		if (i->getStudentRating() < getMinRating())
			deleteStudent(i);
	}
}

void StudentGroup::printGroup()
{


	std::cout << "Group #" << getGroupID() << " - " << getGroupName() << "[" << getStudentsQty() << "] \n";

	std::cout
		<< std::setw(5) << std::left << "ID"
		<< std::setw(15) << "First Name"
		<< std::setw(15) << "Second Name"
		<< std::setw(15) << "Patronymic"
		<< std::setw(8) << "Course"
		<< std::setw(5) << "Age"
		<< std::setw(8) << "Rating"
		<< std::endl;

	for (auto& i : students)
	{

		{
			std::cout
				<< std::setw(5) << i->getId()
				<< std::setw(15) << std::left << i->getFirstName()
				<< std::setw(15) << i->getSecondName()
				<< std::setw(15) << i->getParentName()
				<< std::setw(8) << i->getStudentCourse()
				<< std::setw(5) << i->getStudentAge()
				<< std::setw(8) << i->getStudentRating()
				<< std::endl;
		}


	}

	std::cout << "_______________________________________________________________________ \n \n";
}