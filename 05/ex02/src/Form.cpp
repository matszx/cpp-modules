#include "../inc/Form.hpp"

Form::Form(): _name("Lambda"), _signReq(GRADE_MIN), _execReq(GRADE_MIN) {}

Form::Form(std::string const name, int signReq, int execReq): _name(name), _signReq(signReq), _execReq(execReq)
{
	if (signReq < 1 || execReq < 1)
		throw Form::GradeTooHighException();
	if (signReq > 150 || execReq > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form& src): _signReq(0), _execReq(0)
{
	*this = src;
}

Form::~Form() {}

Form& Form::operator=(const Form& src)
{
	_signed = src._signed;
	return *this;
}

std::string	Form::getName()
{
	return _name;
}

int			Form::getSignReq()
{
	return _signReq;
}

int			Form::getExecReq()
{
	return _execReq;
}

bool		Form::isSigned()
{
	return _signed;
}

void		Form::beSigned(Bureaucrat& b)
{
	if (b.getGrade() > _signReq)
		throw Bureaucrat::GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "GradeTooHighException";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "GradeTooLowException";
}

std::ostream&	operator<<(std::ostream &out, Form& f)
{
	return out << "form " << f.getName() << " (signReq:" << f.getSignReq() << ",execReq:" << f.getExecReq() << ")";
}
