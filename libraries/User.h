#ifndef USER_H
#define USER_H 

/*User header file contains the add, delete and edit functions that extends to the staff
admin and student*/

class User
{
public:
	User(std::string,char);
	void setName(std::string);
	void setGender(char);
	void setId();
	void setPin();
	std::string getName();
	char getGender();
	int getId();
	int getPin();
	~User();
	
private:
	int id;
	std::string name;
	char gender;
	int pin;

};




#endif