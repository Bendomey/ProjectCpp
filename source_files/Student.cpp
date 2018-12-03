#include <iostream>
#include <string>
#include "..\libraries\students.h"
#include "User.cpp"


namespace student {

	students::students(std::string name, char gender): User(name,gender){

	}

	students::~students() {
		// destructor
	}

	int students::getStatus() {
		return this->status;
	}
	
}