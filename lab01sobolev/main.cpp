#include <iostream>
#include "studentgroup.h"

int main()
{
	

	StudentGroup* Networks = new StudentGroup("Networks", 1, 16, 3.5, 10);
	StudentGroup* Microsoft = new StudentGroup("Microsft", 2, 0, 4, 5);
	StudentGroup* Gym = new StudentGroup("Gym", 3);




	Student* zh = new Student(1, "Zhdan", "Khovansky", "Anatoliich", 1, 18, 3.5);
	Student* za = new Student(2, "Zaur", "Pakhomovr", "Danilovich", 1, 17, 3.4);
	Student* zi = new Student(3,"Zigmund", "Korovyak", "Evgenievich", 1, 16, 4.7);
	Student* st = new Student(4, "Stanislav", "Karpov", "Danilovich", 1, 17, 4.5);
	Student* de = new Student(5, "Denis", "Mikheev", "Sergeevich", 1, 18, 3.8);
	Student* ol = new Student(6, "Oleg ", "Aksetov", "Antonovich", 1, 20, 3.9);
	Student* sa = new Student(7, "Savely", "Mitrofanov", "Levovich", 1, 19, 3.7);
	Student* go = new Student(8, "Gordey", "Plotnikov ", "Sergeevich", 2, 22, 3.2);
	Student* ni = new Student(9, "Nikifor", "Kalachev", "Artemovich", 2, 21, 3.5);
	Student* ko = new Student(10, "Konstantin", "Demyanov", "Matveevich", 2, 21, 5);
	Student* an = new Student(11, "Andrey", "Voronov", "Artemovich", 3, 25, 4.7);
	Student* ar = new Student(12, "Artem", "Sychev", "Romanovich", 3, 24, 4.2);
	Student* iv = new Student(13, "Ivan", "Aksetov", "Artemovich", 3, 27, 4.8);

	Networks->addStudent(zh);
	Networks->addStudent(za); 
	Networks->addStudent(zi);
	Networks->addStudent(st);
	Networks->addStudent(de);
	Networks->addStudent(ol);
	Networks->addStudent(sa);

	
	Networks->printGroup();
	Networks->sortWithName(); 
	std::cout << "//Sorted by Second Name \n \n \n";
	Networks->printGroup();
	Networks->deleteStudent(zh);
	std::cout << "//expelled student [id 1] \n \n\n"; 
	Networks->printGroup();
		

	Microsoft->addStudent(go);
	Microsoft->addStudent(ni); 
	Microsoft->addStudent(ko);
	Microsoft->addStudent(an);
	Microsoft->addStudent(de);
	Microsoft->addStudent(ar);
	Microsoft->addStudent(iv);

	Microsoft->sortWithRating();
	Microsoft->printGroup();

	Microsoft->setMinAge(22);
	Microsoft->checkGroups();

	Microsoft->printGroup(); 

	std::cout << "//MAX Gym members - 10 \n \n\n";
	Gym->addStudent(zh);
	Gym->addStudent(za);
	Gym->addStudent(zi);
	Gym->addStudent(st);
	Gym->addStudent(de);
	Gym->addStudent(ol);
	Gym->addStudent(sa);
	Gym->addStudent(go);
	Gym->addStudent(ni);
	Gym->addStudent(ko);
	Gym->addStudent(an);	
	Gym->addStudent(ar);
	Gym->addStudent(iv);

	Gym->printGroup();
	Gym->setStudentsMax(20);

	std::cout << "//MAX Gym members - 20 \n \n\n";

	Gym->addStudent(zh);
	Gym->addStudent(za);
	Gym->addStudent(zi);
	Gym->addStudent(st);
	Gym->addStudent(de);
	Gym->addStudent(ol);
	Gym->addStudent(sa);
	Gym->addStudent(go);
	Gym->addStudent(ni);
	Gym->addStudent(ko);
	Gym->addStudent(an);	
	Gym->addStudent(ar);
	Gym->addStudent(iv);

	Gym->printGroup();



	delete zh, za, zi, st, de, ol, sa, go, ni, ko, an, ar, iv;
	delete Networks, Microsoft;

	system("Pause");
}

