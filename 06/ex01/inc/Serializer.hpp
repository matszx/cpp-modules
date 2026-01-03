#pragma once

#include <iostream>
#include <stdint.h>

typedef struct Data
{
	std::string	str;
	int 		num;
}	Data;

class Serializer
{
	public:
		Serializer();
		Serializer(const Serializer& src);
		virtual ~Serializer() = 0;
		Serializer&	operator=(const Serializer& src);
		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);
};
