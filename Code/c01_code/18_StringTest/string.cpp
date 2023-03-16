import <string>;
import <iostream>;
import <format>;

using namespace std;

int main()
{
	string myString{ "Hello, World" };
	cout << format("The value of myString is {}\n", myString);
	cout << format("The second letter is {}\n", myString[1]);
}
