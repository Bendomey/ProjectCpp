#ifndef ADMIN_H
#define ADMIN_H 
#include <string>
#include "User.h"
/* admin header file can register a student, staff(lecturer and HOD)*/


namespace admin
{
	
	class Admin
	{
	public:
		Admin();
		void addStudent(student::students& stu);
		void addStaff(staff::staffs& staff);
		void removeStudent(student::students& stu);
		void removeStaff(staff::staffs& staff);
		void editStudent(student::students& stu);
		void editStaff(staff::staffs&);
		~Admin();
	private:
		int status; //checking to see whether you are a student(2) or staff(1)

		
	};

}


#endif