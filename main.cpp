#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "Art_Student.h"
#include "Physics_Student.h"
//using namespace here because lots of std:: and just getting rid of them makes to cleaner and closer to java
using namespace std;

int main()
{
	//vector pointers to make sure we are poinging at the memorty location
	//using arrays to make populating every student easier
	vector<Art_Student*> art_students;
	vector<Physics_Student*> physics_students;

	string artFirst[5]  = {"Aiden", "Braden", "Kaden", "Haden", "Jaden"};
	string artLast[5]   = {"Watt", "Jouels", "Foot", "Pounds", "Newtons"};
	double artGpa[5]         = {4.0, 3.5, 3.1, 3.0, 2.9};
	string artEmph[5]   = {"Art Studio", "Art History", "Art Education", "Art History", "Art Studio"};

	//for loop to go to each student 1 - 5 and adding in all the information to them like nname gpa and emphasis
	for (int i = 0; i < 5; i++)
	{
		art_students.push_back(new Art_Student);
		art_students[i]->setName(artFirst[i], artLast[i]);
		art_students[i]->setgpa(artGpa[i]);
		art_students[i]->setEnrolledYear(2000 + i);
		art_students[i]->setEnrolledSemester(i % 2 == 0 ? "Fall" : "Spring");
		art_students[i]->setGradYear(2026 + i);
		art_students[i]->setGradSemester(i % 2 == 0 ? "Spring" : "Fall");
		art_students[i]->setIsGrad(i >= 4);
		art_students[i]->setArtEmphasis(artEmph[i]);
	}

	string phyFirst[5] = {"Abby", "Baily", "Camery", "Daisy", "Emiely"};
	string phyLast[5]  = {"Meter", "liter", "Kelvin", "Lumens", "Gram"};
	double phyGpa[5]        = {2.5, 2.7, 2.9, 3.1, 3.9};
	string phyConc[5]  = {"Biophysics", "Earth and Planetary Sciences", "Biophysics", "Earth and Planetary Sciences", "Biophysics"};

	//same thing here for the physics student same populating and arrays to fill in data simpiliest path
	//rather than 70+ lines for each name gpa enrolled year semester grad year semester and is graduate and the concentration
	for (int i = 0; i < 5; i++)
	{
		physics_students.push_back(new Physics_Student);
		physics_students[i]->setName(phyFirst[i], phyLast[i]);
		physics_students[i]->setgpa(phyGpa[i]);
		physics_students[i]->setEnrolledYear(2001 + i);
		physics_students[i]->setEnrolledSemester(i % 2 == 0 ? "Spring" : "Fall");
		physics_students[i]->setGradYear(2027 + i);
		physics_students[i]->setGradSemester(i % 2 == 0 ? "Fall" : "Spring");
		physics_students[i]->setIsGrad(i >= 3);
		physics_students[i]->setConcentration(phyConc[i]);
	}

	//file writing code starting here creating the file
	ofstream outfile;
	outfile.open("student_info.dat", ios::out);

	//writing to file starting with the art student
	outfile << "_____Art Students_____\n";
	for(int i = 0; i < (int)art_students.size(); i++)
	{
		outfile << "Name: " << art_students[i]->getFirstName() << " " << art_students[i]->getLastName() << "\n";
		outfile << "GPA: " << art_students[i]->getgpa() << "\n";
		outfile << "Enrolled: " << art_students[i]->getEnrolledSemester() << " " << art_students[i]->getEnrolledYear() << "\n";
		outfile << "Graduation: " << art_students[i]->getGradSemester() << " " << art_students[i]->getGradYear() << "\n";
		outfile << "Level: " << (art_students[i]->getIsGrad() ? "Graduate" : "Undergraduate") << "\n";
		outfile << "Art Emphasis: " << art_students[i]->getArtEmphasis() << "\n\n";
	}

	//now the physics student
	outfile << "_____Physics Students_____\n";
	for(int i = 0; i < (int)physics_students.size(); i++)
	{
		outfile << "Name: " << physics_students[i]->getFirstName() << " " << physics_students[i]->getLastName() << "\n";
		outfile << "GPA: " << physics_students[i]->getgpa() << "\n";
		outfile << "Enrolled: " << physics_students[i]->getEnrolledSemester() << " " << physics_students[i]->getEnrolledYear() << "\n";
		outfile << "Graduation: " << physics_students[i]->getGradSemester() << " " << physics_students[i]->getGradYear() << "\n";
		outfile << "Level: " << (physics_students[i]->getIsGrad() ? "Graduate" : "Undergraduate") << "\n";
		outfile << "Concentration: " << physics_students[i]->getConcentration() << "\n\n";
	}

	//print out to make sure the file sucessfully wrote out shoudle show 10 here every time
	outfile.close();
	cout << "Wrote " << art_students.size() + physics_students.size() << " students to student_info.dat\n";

	//memory allocation freeing
	for(int i = 0; i < (int)art_students.size(); i++)
		delete art_students[i];
	for(int i = 0; i < (int)physics_students.size(); i++)
		delete physics_students[i];

	return 0;
}
