#include "../inc/Point.hpp"

Point::Point(void): _x(0), _y(0) {}

Point::Point(const float x, const float y): _x(x), _y(y) {}

Point::Point(const Point& p): _x(p._x), _y(p._y) {}

Point::~Point(void) {}

Point& Point::operator=(const Point& p)
{
	const_cast<Fixed&>(this->_x) = p._x;
	const_cast<Fixed&>(this->_y) = p._y;
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
