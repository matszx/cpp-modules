#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *ptr = &str;
    std::string &ref = str;

    std::cout << "str addr:\t" << &str << std::endl;
    std::cout << "ptr addr:\t" << ptr << std::endl;
    std::cout << "ref addr:\t" << &ref << std::endl;
    std::cout << "str val:\t" << str << std::endl;
    std::cout << "ptr val:\t" << *ptr << std::endl;
    std::cout << "ref val:\t" << ref << std::endl;
    return (0);
}