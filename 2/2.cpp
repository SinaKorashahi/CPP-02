//Sina Khorashahi - 98440373
//2.
#include<iostream>

using namespace std;

int main() 
{
	int hours, minutes, seconds;

	cout << "Hours: ";
	cin >> hours;
	cout << "Minuts: ";
	cin >> minutes;
	cout << "Seconds: ";
	cin >> seconds;

	cout << "Seconds = " << seconds + minutes * 60 + hours * 3600;

	return 0;
}

