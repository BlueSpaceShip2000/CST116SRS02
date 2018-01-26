// This project illustrates how to get input from the user and display the user input in scientific notation
#include "stdafx.h"
#include <iostream>
#include <iomanip>
using std::ios;


int main()
{
	double user_input = 0;

	std::cout << "Enter a number: " << std::endl;

	std::cin >> user_input;
	std::cout.setf(ios::scientific);
	std::cout << user_input << std::endl;
	
	return 0;


}

