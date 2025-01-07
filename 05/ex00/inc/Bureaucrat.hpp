#pragma once

#include <iostream>
#include <exception>

#define	GRADE_MIN	150

class Bureaucrat
{
	private:
		std::string	_name;
		int			_grade;
	public:
		Bureaucrat();
		Bureaucrat(int grade);
		Bureaucrat(const Bureaucrat& src);
		~Bureaucrat();
		Bureaucrat&	operator=(const Bureaucrat& src);
		std::string	getName();
		int			getGrade();
		void		increaseGrade();
		void		decreaseGrade();
	class GradeTooHighException: public std::exception {};
	class GradeTooLowException: public std::exception {};
};

std::ostream&	operator<<(std::ostream &out, Bureaucrat& b);