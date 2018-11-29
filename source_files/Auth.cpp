#include <iostream>
#include <string>
#include "..\libraries\Auth.h"



namespace auth{

	Auth::Auth(){

	}

	Auth::~Auth(){

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