#include "../inc/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Jean-Michel Office"), _grade(GRADE_MIN) {}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& src)
{
	*this = src;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src)
{
	_grade = src._grade;
	return *this;
}

std::string	Bureaucrat::getName()
{
	return _name;
}

int			Bureaucrat::getGrade()
{
	return _grade;
}

void		Bureaucrat::increaseGrade()
{
	if (_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

void		Bureaucrat::decreaseGrade()
{
	if (_grade >= GRADE_MIN)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

void		Bureaucrat::signForm(Form& form)
{
	if (!form.beSigned(*this))
		std::cout << this << "couldn't sign" << form << "because his grade is too low" << std::endl;
	else if (form.isSigned())
		std::cout << this << "couldn't sign" << form << "because it's already signed" << std::endl;
	else
		std::cout << this << "signed" << form << std::endl;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "GradeTooHighException";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "GradeTooLowException";
}

std::ostream&	operator<<(std::ostream &out, Bureaucrat& b)
{
	return out << b.getName() << ", bureaucrat grade " << b.getGrade();
}
