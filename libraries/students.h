

#ifndef STUDENT_H
#define STUDENT_H 

#include "User.h"


/*student header file contains methods and properties  for all students,you can create new student */

namespace student {

	class students : public User
	{
	public:
		students(std::string,char);
		int getStatus();
		~students();

	private:
		int status = 3;
		
	};




}



#endif