#include <iostream>
#include "user.h"



User::User(std::string name,char gender) : name(name), gender(gender){

}

	std::string User::getName(){return this->name;}
	char User::getGender(){return this->gender;}