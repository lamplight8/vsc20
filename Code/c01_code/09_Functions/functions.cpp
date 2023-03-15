import <iostream>;
import <format>;

using namespace std;

void myFunction(int i, char c)
{
	cout << format("the value of i is {}\n", i);
	cout << format("the value of c is {}\n", c);
}

int addNumbers(int number1, int number2)
{
	cout << format("Entering function {}\n", __func__);
	return number1 + number2;
}

double addNumbers(double a, double b)
{
	return a + b;
}

int main()
{
	int someInt{ 6 };
	char someChar{ 'c' };
	myFunction(8, 'a');
	myFunction(someInt, 'b');
	myFunction(5, someChar);

	int sum{ addNumbers(5, 3) };

	cout << format("{}\n", addNumbers(1, 2)); // Calls the integer version
	cout << format("{}\n", addNumbers(1.11, 2.22)); // Calls the double version
}
