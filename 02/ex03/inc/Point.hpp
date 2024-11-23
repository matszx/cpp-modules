#ifndef POINT_HPP
# define POINT_HPP

# include "../inc/Fixed.hpp"

class Point
{
	private:
	// attributes
		Fixed const	_x;
		Fixed const	_y;

	public:
	// constructors
		Point(void);
		Point(float const x, float const y);
		Point(const Point& p);
	// destructors
		~Point();
	// operators
		Point&	operator=(const Point& p);
	// methods
		const Fixed&	getX(void) const;
		const Fixed&	getY(void) const;
};

#endif