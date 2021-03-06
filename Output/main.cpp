//This program illustrates the use of C++ stream manipulators and its effects on cout formatting
#include "stdafx.h"
#include <iostream>
#include <iomanip>
using std::setw;
using std::ios;
using std::setprecision;


int main()
{
		double west_sales = 36364.87;
		double midwest_sales = 12431.33;
		double east_sales = 127690.50;
		double south_sales = 9200.00;
	

	std::cout.imbue(std::locale("en-US"));

	std::cout << setw(13) << "West: $";
	std::cout.width(10);
	std::cout << setprecision(7) << west_sales << std::endl;

	std::cout << setw(13) << "Midwest: $";
	std::cout.width(10);
	std::cout << setprecision(7) << midwest_sales << std::endl;
	
	std::cout << setw(13) << "East: $";
	std::cout.width(10);
	std::cout.setf(ios::showpoint);
	std::cout << setprecision(8) << east_sales << std::endl;

	std::cout << setw(13) << "South: $";
	std::cout.width(10);
	std::cout.setf(ios::showpoint);
	std::cout << setprecision(6) << south_sales << std::endl;
	
	return 0;
}

