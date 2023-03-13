import <iostream>;
import <format>;
using namespace std;

void myFunction(int i, char c);
int addNumbers(int number1, int number2);
double addNumbers(double a, double b);

int main()
{
	int someInt{ 6 };
	char someChar{ 'c' };
	myFunction(8, 'a');
	myFunction(someInt, 'b');
	myFunction(5, someChar);
	int sum{ addNumbers(5, 3) };
	cout << format("{}\n", sum);
	cout << format("{}\n", addNumbers(1, 2)); // Calls the integer version
	cout << format("{}\n", addNumbers(1.11, 2.22));   // Calls the double version
	return 0;
}

void myFunction(int i, char c)
{
	cout << format("the value of {} is {}\n", c, i);
}


int addNumbers(int number1, int number2)
{
	return number1 + number2;
}

double addNumbers(double a, double b)
{
	return a + b;
}
