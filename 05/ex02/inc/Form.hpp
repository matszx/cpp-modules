#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string const	_name;
		int const			_signReq;
		int const			_execReq;
		bool				_signed;
	public:
		Form();
		Form(std::string const name, int signReq, int execReq);
		Form(const Form& src);
		~Form();
		Form&	operator=(const Form& src);
		std::string	getName();
		bool		isSigned();
		int			getSignReq();
		int			getExecReq();
		void		beSigned(Bureaucrat& b);
	
	class GradeTooHighException: public std::exception
	{
		const char*	what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
		const char*	what() const throw();
	};
};

std::ostream&	operator<<(std::ostream &out, Form& f);
