#include <iostream>
#include "helloworld.h"
#include "pointer.h"
#include "reference.h"
#include "Player.h"

int main() {

	int var;
	int* ptr = &var;
	
	helloworld("Hello, World!");

	var = 8;
	pointer(ptr);
	reference(var);
	std::cin.get();
}
