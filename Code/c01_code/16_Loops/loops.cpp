import <iostream>;
import <array>;
import <format>;

using namespace std;

int main()
{
	{
		// The while loop
		int i{ 0 };
		while (i < 5) {
			cout << "This is silly.\n";
			++i;
		}
	}

	cout << "\n";

	{
		// The do/while loop
		int i{ 100 };
		do {
			cout << "This is silly.\n";
			++i;
		} while (i < 5);
	}

	cout << "\n";

	{
		// The for loop
		for (int i{ 0 }; i < 5; ++i) {
			cout << "This is silly.\n";
		}
	}

	cout << "\n";

	{
		// The range-based for loop
		array arr{ 1, 2, 3, 4 };
		for (int i : arr) { 
			cout << format("{}\n", i);
		}
	}

	{
		// The range-based for loop with initializer (C++20)
		for (array arr{ 1, 2, 3, 4 }; int i : arr) 
		{ 
			cout << format("{}\n", i); 
		}
	}
}