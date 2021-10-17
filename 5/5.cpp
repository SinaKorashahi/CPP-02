//Sina Khorashahi - 98440373
//5.
#include<iostream>
using namespace std;

int fibonacci(int);
int main() 
{
	int n;
	cout << "n: ";
	cin >> n;

	for (int i = 0; i < n; i++)
		cout << fib(i) << " ";
	return 0;
}
int fibonacci(int n)
{
	if (n <= 1)
		return n;
	return fibonacci(n - 1) + fibonacci(n - 2);
}

