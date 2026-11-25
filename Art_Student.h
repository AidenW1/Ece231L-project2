
//Inheritance file here to make sure the Art_Student has the correct methods to be used
//constructor deconstructor getter and then setter
#ifndef ART_STUDENT_H
#define ART_STUDENT_H

#include "Student.h"
#include <string>

class Art_Student : public Student 
{
	private:

		std::string artEmphasis;

	public:
		Art_Student();
		~Art_Student();

		std::string getArtEmphasis() const;
		void setArtEmphasis(const std::string& emphasis);
};

#endif
