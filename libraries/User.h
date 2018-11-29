#ifndef USER_H
#define USER_H 

/*User header file contains the add, delete and edit functions that extends to the staff
admin and student*/

class User
{
public:
	User(std::string,std::string);
	void setName(std::string);
	void setId(std::string);
	std::string getName();
	std::string getId();
	~User();
	
private:
	std::string id, name;
};




#endif