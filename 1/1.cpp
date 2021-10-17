//Sina Khorashahi - 98440373
//1.
#include <iostream>
#include <string>

using namespace std;

int main()
{
	float number, sum{ 0 };
	string c;

	while (c != "exit")
	{
		cout << "Please enter a number: ";
		cin >> number;
		sum += number;
		cout << "If you want to stop type 'exit' else 'y': ";
		cin >> c;
	}
	cout << "Sum = " << sum;
	return 0;
}

