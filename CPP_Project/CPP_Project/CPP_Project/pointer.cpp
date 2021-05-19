#include <iostream>
#include"pointer.h"

void pointer(int* ptr) {

	std::cout << "Value at ptr is: " << *ptr << " at address: " << ptr << std::endl;
	
	++* ptr;
	std::cout << " Operation: ++* ptr, Value : " << *ptr << " at address: " << ptr << std::endl;
	(*ptr)++;
	std::cout << " Operation: (*ptr)++, Value : " << *ptr << " at address: " << ptr << std::endl;
	*ptr++;
	std::cout << " Operation: *ptr++, Value : " << *ptr << " at address: " << ptr << std::endl;
	*++ ptr;
	std::cout << " Operation: *++ ptr, Value : " << *ptr << " at address: " << ptr << std::endl;
}