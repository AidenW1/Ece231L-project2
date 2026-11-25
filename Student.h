//Inheritance file making sure the all the correct variables are here and methods so that
//student is setup properly and going to have all is correct parts
#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student
{
	protected:
		std::string firstName;
		std::string lastName;
		double gpa;
		int gradYear;
		std::string gradSemester;
		int enrolledYear;
		std::string enrolledSemester;
		bool isGrad;

	public:
		Student();
		virtual ~Student();


		std::string getFirstName() const;
		std::string getLastName() const;
		double getgpa() const;
		int getGradYear() const;
		std::string getGradSemester() const;
		int getEnrolledYear() const;
		std::string getEnrolledSemester() const;
		bool getIsGrad() const;

		void setName(const std::string& first, const std::string& last);
		void setFirstName(const std::string& first);
		void setLastName(const std::string& last);
		void setgpa(double g);
		void setGradYear(int year);
		void setGradSemester(const std::string& semester);
		void setEnrolledYear(int year);
		void setEnrolledSemester(const std::string& semester);
		void setIsGrad(bool grad);
};

#endif
