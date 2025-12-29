#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		std::string const	_name;
		int const			_signReq;
		int const			_execReq;
		bool				_signed;
	public:
		AForm();
		AForm(std::string const name, int signReq, int execReq);
		AForm(const AForm& src);
		virtual ~AForm();
		AForm&	operator=(const AForm& src);
		std::string		getName();
		bool			isSigned();
		int				getSignReq();
		int				getExecReq();
		void			beSigned(Bureaucrat& b);
		void			execute(Bureaucrat const & executor) const;
		virtual void	beExecuted() const = 0;
	
	class GradeTooHighException: public std::exception
	{
		const char*	what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
		const char*	what() const throw();
	};
	class FormNotSignedException: public std::exception
	{
		const char* what() const throw();
	};
};

std::ostream&	operator<<(std::ostream &out, AForm& f);
