#include <iostream>
#include <string>
#include "libraries\Auth.h"



namespace auth{

	Auth::Auth(){

	}

	Auth::~Auth(){

	}

	void Auth::setId(std::string id = ""){
		this->id = id;
	}

	void Auth::setName(std::string name = ""){
		this->name = name;
	}

	void Auth::setPin(int pin = 0){
		this->pin = pin;
	}

	void Auth::signUp(){

		if (setId(""))
		{
			std::cout << "Id is empty\n";
		} else 
		if (setName(""))
		{
			std::cout << "Name field is empty\n";
		}else 
		if (setPin(0))
		{
			std::cout << "Pin field empty\n";		
		}else {
			std::cout << "Account successful\n";
			// sign in
		}
	}

	void Auth::signIn(std::string id = "", int pin = 0){

		if (id == "")
		{	
			std::cout << "Id field is empty\n";
		} else 
		if (pin == 0)
		{
			std::cout << "Pin field is empty\n";
		}else 
		if (id != this->id)
		{
			std::cout << "Id is incorrect\n";
		} else
		if (pin != this->pin)
		{
			std::cout << "Pin is incorrect\n";
		}else {
			std::cout << "successful\n";
			//session
		}

	}

	
	
}