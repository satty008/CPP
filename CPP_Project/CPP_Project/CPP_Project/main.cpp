#include <iostream>
#include "helloworld.h"
#include "pointer.h"

int main() {

	int var;
	int* ptr = &var;

	helloworld("Hello, World!");

	var = 8;
	pointer(ptr);
	std::cin.get();
}
