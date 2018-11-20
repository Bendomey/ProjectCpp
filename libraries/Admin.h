#ifndef ADMIN_H
#define ADMIN_H 
#include <string>
#include "User.h"
/* admin header file can register a student, staff(lecturer and HOD)*/


namespace admin
{
	
	class Admin : public User
	{
	public:
		Admin();
		~Admin();
		
	};

}


#endif