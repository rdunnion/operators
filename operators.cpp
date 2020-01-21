// operators assignment 3.4
#include <iostream>
using namespace std;

int main()
{
	cout << "Please enter a floating-point value: ";
	int n;
	cin >> n;
	cout << "n = " << n
		<< "\nn+1 = " << n + 1
		<< "\nthree times n = " << 3 * n
		<< "\ntwice n = " << n + n
		<< "\nn squared = " << n * n
		<< "\nhalf of n = " << n / 2
		<< "\nsquare root of n = " << sqrt(n)
		<< "\nn modulo 2 =" << n%2
		<< '\n';

	// keep window open
	cin.clear();
	cout << "Please enter a character to exit\n";
	char ch;
	cin >> ch;

	return 0;
}