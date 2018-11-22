#include <iostream>
#include <string>
#include "libraries\User.h"


namespace user {

	user::user(std::string name = "", std::string id = ""){
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

	user::~user(){

	}

	void user::setName(std::string name){
		this->name = name;
	}
	
	void user::setId(std::string id){
		this->id = id;
	}

	string user::getName(){
		return this->name;
	}

	string user::getId(){
		return this->id;
	}
}