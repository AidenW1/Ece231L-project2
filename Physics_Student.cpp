

#include "Physics_Student.h"

Physics_Student::Physics_Student()
{
	concentration = "Biophysics";
}

Physics_Student::~Physics_Student()
{
}

std::string Physics_Student::getConcentration() const
{
	return concentration;
}

void Physics_Student::setConcentration(const std::string& emphasis)
{
	if (emphasis == "Biophysics" || emphasis == "Earth and Planetary Sciences")
	{
		concentration = emphasis;
	}
}
