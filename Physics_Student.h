
#ifndef PHYSICS_STUDENT_H
#define PHYSICS_STUDENT_H

#include "Student.h"
#include <string>

class Physics_Student : public Student 
{
	private:

		std::string concentration;

	public:
		Physics_Student();
		~Physics_Student();

		std::string getConcentration() const;
		void setConcentration(const std::string& conc);
};

#endif
