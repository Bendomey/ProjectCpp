
#ifndef DATATYPES_H
#define DATATYPES_H


/*datatypes header file contains the variables needed by the various status*/


// for courses
namespace course {

struct courseType
{
	std::string code;	
	std::string Title;	
	std::string Lecturer;	
	int score;
	std::string grade;
	int semester;
	int level;
};

}


// for every human(they would inherit)
struct UserType
{
	int id;
	std::string name;
	char gender;
	int pin;
	int status;
};

// For staff
namespace staff {

struct staffType
{

};

}


// for students
namespace student {

struct studentType
{
	std::string Programme;

};

}
#endif