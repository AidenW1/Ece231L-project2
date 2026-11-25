#include "Student.h"
#include <iostream>


Student::Student()
	: firstName(""),
	lastName(""),
	gpa(0.0),
	gradYear(0),
	gradSemester(""),
	enrolledYear(0),
	enrolledSemester(""),
	isGrad(false)
{
}

Student::~Student(){}

std::string Student::getFirstName() const { return firstName; }
std::string Student::getLastName() const { return lastName; }
double Student::getgpa() const { return gpa; }
int Student::getGradYear() const { return gradYear; }
std::string Student::getGradSemester() const { return gradSemester; }
int Student::getEnrolledYear() const { return enrolledYear; }
std::string Student::getEnrolledSemester() const { return enrolledSemester; }
bool Student::getIsGrad() const { return isGrad; }


void Student::setName(const std::string& first, const std::string& last)
{
	firstName = first;
	lastName = last;
}

void Student::setFirstName(const std::string& first) { firstName = first; }
void Student::setLastName(const std::string& last) { lastName = last; }
void Student::setgpa(double g) { gpa = g; }
void Student::setGradYear(int year) { gradYear = year; }
void Student::setGradSemester(const std::string& semester) { gradSemester = semester; }
void Student::setEnrolledYear(int year) { enrolledYear = year; }
void Student::setEnrolledSemester(const std::string& semester) { enrolledSemester = semester; }
void Student::setIsGrad(bool grad) { isGrad = grad; }
