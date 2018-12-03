#ifndef _USER
#define _USER 

class User
{
public:

	User(std::string name,char gender);
	std::string getName();
	char getGender();
	
private:
	std::string name;
	char gender;
};


#endif