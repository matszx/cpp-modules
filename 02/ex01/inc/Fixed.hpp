#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

# define DEBUG	"\x1b[2;38;5;110mdebug -> "
# define RESET	"\x1b[0m"

class Fixed
{
	private:
		int					_value;
		static const int	_fbits;
	public:
		Fixed(void);
		Fixed(int const val);
		Fixed(float const val);
		Fixed(const Fixed& f);
		~Fixed(void);
		Fixed&	operator=(const Fixed& f);
		int		getRawBits(void) const;
		int		setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;
};

std::ostream&	operator<<(std::ostream &out, const Fixed& f);

#endif