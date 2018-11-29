#include <iostream>
#include <string>
#include "libraries\User.h"
#include <cstdlib>

namespace user {

	
	User::User(){

	}

	User::User(std::string name = ""){
		if (name = "")
		{
			cout << "Name field is empty\n";
			// throw an error
		}else {
			this->setName(name);
		}
	}

	User::~User(){
		// object deleted
	}

	void User::setName(std::string name){
		this->name = name;
	}
	
	void User::setId(){
		
		// generate a random 8 digits here

	}

	void User::setPin(){

		// generate a random 5 digits here
		int r = rand() * this->getId();
		this->pin = (r/10000);
	}

	string User::getName(){
		return this->name;
	}

	string User::getId(){
		return this->id;
	}

	int User::getPin(){
		return this->pin;
	}
}