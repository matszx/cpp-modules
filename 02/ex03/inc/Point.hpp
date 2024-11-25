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
		Point(const float x, const float y);
		Point(const Point& p);
	// destructors
		~Point(void);
	// operators
		Point&	operator=(const Point& p);
	// methods
		const Fixed&	getX(void) const;
		const Fixed&	getY(void) const;
};

std::ostream&	operator<<(std::ostream &out, const Point& p);

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif
