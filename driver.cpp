#include <iostream>
#include <cstdlib>
#include "student.cpp"
#include "staff.cpp"
// #include "user.h"



using namespace std;
int main(int argc, char const *argv[])
{
	student a("Ben",'m');
	cout << a.getName();
	
	return 0;
}