#pragma once

//Static keyword outside a class or struct: Linkage of that symbol is going to be internal
static int s_Variable = 5; // Only linked internally inside this translation unit. Basically static outside a class declares a private variable inside this class

static void Function() {

}

class Static
{
	//Static keyword inside a class or struct: Variable is going to share the static variable with all instance of the class
	// Meaning, for all instances, only one memory location is allocated

};

