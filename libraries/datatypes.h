
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
	std::string Location;
	int semester;
	int level;
	char Grade;
};

}

// For staff
namespace staff {

struct staffType
{
	std::string Name;
};

}


// for students
namespace student {

struct studentType
{
	std::string IndexNumber;
	std::string Name;
	std::string Programme;

};

}
#endif