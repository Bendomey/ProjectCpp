#include <iostream>
#include <string>
#include "..\libraries\User.h"
#include <cstdlib>



	User::User(std::string name, char gender){
		
			this->setName(name);
			this->setGender(gender);
			this->setId();
			this->setPin();
		
	}

	User::~User(){
		// object deleted
	}

	void User::setName(std::string name){
		this->name = name;
	}

	void User::setGender(char gender) {
		this->gender = gender;
	}

	
	void User::setId(){
		
		// generate a random 8 digits here

	}

	void User::setPin(){

		// generate a random 5 digits here
		int r = rand() * this->getId();
		this->pin = (r/10000);
	}

	std::string User::getName(){
		return this->name;
	}

	char User::getGender() {
		return this->gender;
	}


	int User::getId(){
		return this->id;
	}

	int User::getPin(){
		return this->pin;
	}
