//Sina Khorashahi - 98440373
//3.
#include<iostream>

using namespace std;

int main() 
{
	int hours, minutes, seconds;

	cout << "Seconds: ";
	cin >> seconds;
	cout << "Time = " << seconds / 3600 << " : " << (seconds % 3600) / 60 << " : " << seconds % 60;

	return 0;
}

