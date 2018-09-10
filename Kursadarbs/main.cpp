#include <iostream>
#include <iomanip>
#include <string>

#include "structure.h"

using namespace std;

int main()
{
	cout << endl;
	cout << setw(55) << "ASDASDADASD" << endl;
	const int size = 100;
	string arr[size];

	
	cout << setw(55) << "Enter criminal record" << endl;
	detainee criminal;
	cout << "Name: ";
	cin >> criminal.name;
	cout << "Surname: ";
	cin >> criminal.surname;
	   


	cout << endl << endl;
	cin.get();
	return 0;
}