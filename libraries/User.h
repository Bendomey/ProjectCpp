#ifndef USER_H
#define USER_H 

/*User header file contains the add, delete and edit functions that extends to the staff
admin and student*/

class User
{
public:
	User(std::string,char,int);
	void setName(std::string);
	void setGender(char);
	void setStatus(int);
	void setId();
	void setPin();
	std::string getName();
	char getGender();
	int getStatus();
	int getId();
	int getPin();
	~User();
	
private:
	int id;
	std::string name;
	char gender;
	int pin;
	int status;
};




#endif