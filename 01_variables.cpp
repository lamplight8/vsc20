// NOTE: Most compilers will issue a warning or an error
// when code is using uninitialized variables. Some compilers
// will generate code that will report an error at run time.

#include<iostream>
#include<boost/format.hpp>

using namespace std;

int main()
{
	int uninitializedInt;
	int initializedInt{ 7 };

	cout << boost::format("%d is a random value\n") % uninitializedInt;
	cout << boost::format("%d was assigned an initial value\n") % initializedInt;
}
