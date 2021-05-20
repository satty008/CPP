#include <iostream>
#include "helloworld.h"
#include "pointer.h"
#include "reference.h"
#include "Player.h"

 int s_Variable;  // Global variable. Variable name is same as static variable name in Static.h but we will not get compilation error

 void Function() {

 }

int main() {

	int var;
	int* ptr = &var;
	Player player1;
	
	helloworld("Hello, World!");

	var = 8;
	pointer(ptr);
	reference(var);

	player1.Move(5, 6);

	std::cout << s_Variable << std::endl;  // Prints the s_Variable value in this file

	std::cin.get();
}
