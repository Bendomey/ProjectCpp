#include <iostream>
#include <string>
#include "libraries\User.h"


namespace user {

	

	User::User(std::string name = "", std::string id = ""){
		if (name = "")
		{
			cout << "Name field is empty\n";
			// throw an error
		} else
		if (id = "")
		{
			cout << "Id field is empty\n";
		}else {
			this->setName(name);
			this->setId(id);
		}
	}

	User::~User(){
		// object deleted
	}

	void User::setName(std::string name){
		this->name = name;
	}
	
	void User::setId(std::string id){
		this->id = id;
	}

	string User::getName(){
		return this->name;
	}

	string User::getId(){
		return this->id;
	}
}