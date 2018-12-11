#include "School.h"


int main(int argc, char *argv[]){
	struct User user;
	user.first_name = "Emmanuel";
	user.last_name = "Emmanuel";
	user.level = 2000;
	user.id = "10659556";
	user.pin = "1234";
	user.department = "ComputerScience";
	Database db;
	db.fetchUser(1);
	return 0;
}
