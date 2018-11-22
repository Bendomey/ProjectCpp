#include <iostream>
#include <string>
#include "libraries\Admin.h"
using namespace student;
using namespace staff;


namespace admin {

	admin::admin(){

	}

	admin::~admin(){

	}

	void admin::addStudent(students& stu){
		this->status = 1;
	}

	void admin::addStaff(staffs& staff){
		this->status = 2;
	}
}