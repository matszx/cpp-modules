#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

# define DEBUG	"\x1b[2;38;5;110m"
# define RESET	"\x1b[0m"

class Fixed
{
	private:
		int					_value;
		static const int	_fbits;
	public:
		Fixed(void);
		Fixed(const Fixed& f);
		~Fixed(void);
		Fixed&	operator=(const Fixed& f);
		int	getRawBits(void) const;
		int	setRawBits(int const raw);
};

#endif