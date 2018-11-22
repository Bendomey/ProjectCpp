#include <iostream>
#include <cstdlib>

using namespace std;
int main(int argc, char const *argv[])
{
	cout << "Generate a number: \n";

	cout << rand() % 1000;
	return 0;
}