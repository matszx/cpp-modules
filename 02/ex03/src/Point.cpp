#include "../inc/Point.hpp"

Point::Point(void): _x(0), _y(0) {}

Point::Point(const float x, const float y): _x(x), _y(y) {}

Point::Point(const Point& p): _x(p.getX()), _y(p.getY()) {}

Point::~Point(void) {}

Point& Point::operator=(const Point& p)
{
	(void)p;
	return (*this);
}

const Fixed&	Point::getX(void) const
{
	return (this->_x);
}

const Fixed&	Point::getY(void) const
{
	return (this->_y);
}

std::ostream&	operator<<(std::ostream &out, const Point& p)
{
	return (out << "x: " << p.getX().toFloat() << " | y: " << p.getY().toFloat());
}