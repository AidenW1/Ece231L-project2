

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
