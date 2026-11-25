
//Implementation file for the Art student holding the methods to be used for its inheritance
#include "Art_Student.h"

Art_Student::Art_Student()
{
	artEmphasis = "Art Studio";
}

Art_Student::~Art_Student()
{
}

std::string Art_Student::getArtEmphasis() const
{
	return artEmphasis;
}

void Art_Student::setArtEmphasis(const std::string& emphasis)
{
	if (emphasis == "Art Studio" || emphasis == "Art History" || emphasis == "Art Education")
		artEmphasis = emphasis;
}
