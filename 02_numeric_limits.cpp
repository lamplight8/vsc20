#include<iostream>
#include<limits>
#include<boost/format.hpp>
using namespace std;

int main()
{
	cout << "int:\n";
	cout << boost::format("Max int value: %d\n") % numeric_limits<int>::max();
	cout << boost::format("Min int value: %d\n") % numeric_limits<int>::min();
	cout << boost::format("Lowest int value: %d\n") % numeric_limits<int>::lowest();

	cout << "\ndouble:\n";
	cout << boost::format("Max double value: %lf\n") % numeric_limits<double>::max();
	cout << boost::format("Min double value: %lf\n") % numeric_limits<double>::min();
	cout << boost::format("Lowest double value: %lf\n") % numeric_limits<double>::lowest();

	return 0;
}