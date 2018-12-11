#ifndef DATABASE_H
#define DATABASE_H 

#include <stdio.h>
// #include <conio.h>
#include <iostream>
#include <string>

struct  User{
	std::string first_name;
	std::string last_name;
	int level;
	std::string department;
	std::string pin;
	std::string index;
};


class Database
{
	FILE *file;
public:
	Database();
	bool create(struct User user){
	if(fwrite(&user,sizeof(struct User),1,file)){
		return true;
	}
	return false;
}

	~Database();
	
};
	
Database::Database() {

	// open the file for writing
	file = fopen("Database/database.dat", "r+");

	if (file == NULL)
	{
		std::cout << "Unable to open file\n";
	}else
		std::cout  << "File opened";		
}




Database::~Database(){
	fclose(file);
}

#endif