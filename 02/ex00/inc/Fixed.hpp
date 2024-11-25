#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

# define DEBUG	true

# define DB		"\x1b[2;38;5;102m"
# define RESET	"\x1b[0m"

class Fixed
{
	private:
	// attributes
		int					_value;
		static const int	_fbits;
	public:
	// constructors
		Fixed(void);
		Fixed(const Fixed& f);
	// destructors
		~Fixed(void);
	// operators
		Fixed&	operator=(const Fixed& f);
	// methods
		int	getRawBits(void) const;
		int	setRawBits(int const raw);
};

#endif
