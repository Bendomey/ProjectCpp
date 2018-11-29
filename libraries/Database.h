#ifndef DATABASE_H
#define DATABASE_H 

#include <stdio.h>
#include <conio.h>
#include <iostream>


class Database
{
public:
	Database();
	~Database();
	
};
	
Database::Database() {
	FILE *file;
	// open the file for writing
	file = fopen("Database/database.txt", "w");

	if (file == NULL)
	{
		std::cout << "Unable to open file\n";
	}else
		std::cout  << "File opened";		
}

Database::~Database(){
	FILE *file;
	fclose(file);
}

#endif