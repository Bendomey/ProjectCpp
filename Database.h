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


struct Course{
	std::string CourseCode;
	std::string CourseTitle;
	std::string CourseLecturer;
	std::string CourseGrade;
	int Level;
	int CourseScore;
	int Semester;
};


class Database{
	FILE *file;
	struct User user;
public:
	/*
	*constructor that handles opening the file for read and write
	*/
	Database(){
		// open the file for writing
		file = fopen("Database/database.dat", "r+");
		if (file == NULL){
			std::cout << "Unable to open file\n";
			exit();
		}
		std::cout  << "File opened";
	}

	bool create(struct User user){
	if(fwrite(&user,sizeof(struct User),1,file)){
		return true;
	}
		return false;
	}

	bool create(struct Course course){
		if(fwrite($course,sizeof(struct Course),1,file)){
			return true;
		}

		return false;
	}

	User fetchUser(int id){
		while(fread(&user,sizeof(struct User),1,file)){
			printf("%s %s \n",user.first_name,user.last_name);
		}
	}

~Database(){
	fclose(file);
}

};

#endif
