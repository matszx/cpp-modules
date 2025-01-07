#include "../inc/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Fabieng"), _grade(GRADE_MIN) {}

Bureaucrat::Bureaucrat(int grade): _name("Fabieng"), _grade(grade) {}

Bureaucrat::Bureaucrat(const Bureaucrat& src)
{
	*this = src;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src)
{
	_name = src._name;
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

std::ostream&	operator<<(std::ostream &out, Bureaucrat& b)
{
	return out << b.getName() << ", bureaucrat grade " << b.getGrade();
}