#include "../inc/iter.hpp"

/* class Awesome
{
	private:
		int _n;
	public:
		Awesome(void) : _n(42) { return; }
		int get(void) const { return this->_n; }
};

std::ostream& operator<<(std::ostream& o, Awesome const& rhs)
{
	o << rhs.get();
	return o;
}

template <typename T> void print(const T& x)
{
	std::cout << x << std::endl;
	return;
} */

int main(void)
{
	char		arr1[] = {'h', 'e', 'l', 'l', 'o'};
	const char	arr2[] = {'c', 'o', 'n', 's', 't'};

	iter(arr1, 5, printq);
	std::cout << std::endl;
	iter(arr2, 5, printq);
	std::cout << std::endl;

	/* int tab[] = {0, 1, 2, 3, 4};
    Awesome tab2[5];

	std::cout << std::endl;
	iter(tab, 5, print);
	std::cout << std::endl;
	iter(tab2, 5, print); */
	
	return 0;
}
