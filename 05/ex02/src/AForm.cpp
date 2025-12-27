#include "../inc/AForm.hpp"

AForm::AForm(): _name("Lambda"), _signReq(GRADE_MIN), _execReq(GRADE_MIN) {}

AForm::AForm(std::string const name, int signReq, int execReq): _name(name), _signReq(signReq), _execReq(execReq)
{
	if (signReq < 1 || execReq < 1)
		throw AForm::GradeTooHighException();
	if (signReq > 150 || execReq > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm& src): _signReq(0), _execReq(0)
{
	*this = src;
}

AForm::~AForm() {}

AForm& AForm::operator=(const AForm& src)
{
	_signed = src._signed;
	return *this;
}

std::string	AForm::getName()
{
	return _name;
}

int			AForm::getSignReq()
{
	return _signReq;
}

int			AForm::getExecReq()
{
	return _execReq;
}

bool		AForm::isSigned()
{
	return _signed;
}

void		AForm::beSigned(Bureaucrat& b)
{
	if (b.getGrade() > _signReq)
		throw Bureaucrat::GradeTooLowException();
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return "GradeTooHighException";
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "GradeTooLowException";
}

std::ostream&	operator<<(std::ostream &out, AForm& f)
{
	return out << "form " << f.getName() << " (signReq:" << f.getSignReq() << ",execReq:" << f.getExecReq() << ")";
}
