#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

# define DEBUG		false

# define DC			"\x1b[2;38;5;110m"
# define BOLD		"\x1b[1m"
# define UNDERLINE	"\x1b[4m"
# define RESET		"\x1b[0m"

class Fixed
{
	private:
	// attributes
		int					_value;
		static const int	_fbits;
	public:
	// constructors
		Fixed(void);
		Fixed(int const val);
		Fixed(float const val);
		Fixed(const Fixed& f);
	// destructors
		~Fixed(void);
	// operators
		Fixed&	operator=(const Fixed& f);
		bool	operator<(const Fixed& f);
		bool	operator>(const Fixed& f);
		bool	operator<=(const Fixed& f);
		bool	operator>=(const Fixed& f);
		bool	operator==(const Fixed& f);
		bool	operator!=(const Fixed& f);
		float	operator+(const Fixed& f);
		float	operator-(const Fixed& f);
		float	operator*(const Fixed& f);
		float	operator/(const Fixed& f);
		Fixed	operator++(int);
		Fixed	operator++(void);
		Fixed	operator--(int);
		Fixed	operator--(void);
	// methods
		int		getRawBits(void) const;
		int		setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;
		static Fixed&		min(Fixed& f1, Fixed& f2);
		static Fixed&		max(Fixed& f1, Fixed& f2);
		static const Fixed&	min(const Fixed& f1, const Fixed& f2);
		static const Fixed&	max(const Fixed& f1, const Fixed& f2);
};

std::ostream&	operator<<(std::ostream &out, const Fixed& f);

#endif