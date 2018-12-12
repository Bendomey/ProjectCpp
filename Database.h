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
public:
	/*
	*constructor that handles opening the file for read and write
	*/
	Database(){
		// open the file for writing

	}

	bool create(struct User user){
		file = fopen("Database/database.dat", "wb");
		if(file == !NULL){
			fwrite(user,sizeof(struct Course),1,file);
			fclose(file);
			return true;
		}
		return false;
	}

	bool create(struct Course course){
		file = fopen("Database/database.dat", "wb");
		if(file == !NULL){
			fwrite(course,sizeof(struct Course),1,file);
			fclose(file);
			return true;
		}
		return false;
	}

	void fetchUser(int id){
		struct User user;
		file = fopen("Database/database.dat", "rb");
		while(fread(user,sizeof(struct User),1,file)){
			cout << "First Name : " << user.first_name << " last name : " << user.last_name << endl;
		}
		fclose(file);
	}

~Database(){
	fclose(file);
	cout << "File closed.. " << endl;
}

};

#endif
