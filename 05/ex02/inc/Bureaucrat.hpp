#pragma once

#include <iostream>
#include "AForm.hpp"

#define	GRADE_MIN	150

class AForm;

class Bureaucrat
{
	private:
		std::string const	_name;
		int					_grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(const Bureaucrat& src);
		~Bureaucrat();
		Bureaucrat&	operator=(const Bureaucrat& src);
		std::string	getName();
		int			getGrade();
		void		increaseGrade();
		void		decreaseGrade();
		void		signAForm(AForm& form);

	class GradeTooHighException: public std::exception
	{
		const char*	what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
		const char*	what() const throw();
	};
};

std::ostream&	operator<<(std::ostream &out, Bureaucrat& b);
