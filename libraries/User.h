#ifndef USER_H
#define USER_H 

/*User header file contains the add, delete and edit functions that extends to the staff
admin and student*/

class User
{
public:
	User();
	User(std::string);
	void setName(std::string);
	void setId();
	void setPin();
	std::string getName();
	int getId();
	int getPin();
	~User();
	
private:
	int id;
	std::string name;
	int pin;
	int status;
};




#endif