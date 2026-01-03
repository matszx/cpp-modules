#include "../inc/Serializer.hpp"

int main()
{
	Data		data;
	uintptr_t	ptr1;
	Data*		ptr2 = &data;

	data.str = "John";
	data.num = 42;
	std::cout << "str: " << data.str << std::endl;
	std::cout << "num: " << data.num << std::endl << std::endl;
	std::cout << "&data ->  " << &data << std::endl;
	ptr1 = Serializer::serialize(&data);
	ptr2 = Serializer::deserialize(ptr1);
	std::cout << "ptr1  ->  " << ptr1 << std::endl;
	std::cout << "ptr2  ->  " << ptr2 << std::endl << std::endl;
	std::cout << "str: " << data.str << std::endl;
	std::cout << "num: " << data.num << std::endl;
	return 0;
}