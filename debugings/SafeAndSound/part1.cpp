#include "part1.h"
#include <iostream>

char* string_copy(char* dest, unsigned int destsize, const char* src)
{
    char* ret = dest;
    unsigned int i = 0;
    while (i < destsize - 1 && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return ret;
}

void part1()
{
	char password[] = "secret";
	char dest[13];
	char src[] = "hello world!";

	string_copy(dest, 13, src);

	std::cout << src << std::endl;
	std::cout << dest << std::endl;
}