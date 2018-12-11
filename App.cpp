#include "School.h"

// struct  User{
// 	std::string first_name;
// 	std::string last_name;
// 	int level;
// 	std::string department;
// 	std::string pin = "1234";
// 	std::string index;
// };


int main(int argc, char const *argv[])
{
	struct User user;
	Database db;
	// students a("Ben",'m');
	// std::cou#include "..\libraries\datatypes.h"t << a.getName();
	// std::cout << a.getStatus();
	// std::cout << "Hello World\n";
	cout << "Enter first name : ";
	cin >> user.first_name;
	cout << "Enter the last name : ";
	cin >> user.last_name;
	cout << "Enter ther level : ";
	cin >> user.level;
	cout << "Enter the Id :";
	cin >> user.index;
	cout << "Enter the department : ";
	cin >> user.department;
	if(db.create(user)){
		cout << "File populated with data...." << endl;
	}else{
		cout << "Something went wrong ..." << endl;
	}

	

	return 0;
}