import <iostream>;
import <array>;
import <format>;

using namespace std;

int main()
{
	array<int, 3> arr{ 9, 8, 7 };
	// array arr{ 9, 8, 7 };  // Using CTAD
	cout << format("Array size = {}\n", arr.size());
	cout << format("2nd element = {}\n", arr[1]);
}
