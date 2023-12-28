//Q#7: Write a program that take a input a number from user and display its factorial.

#include <iostream>
using namespace std;
int main() {
	int n,m=1,f=1;
	cout << "Enter a number whose you want to see factorial:";
	cin >> n;
	while (m <= n)
	{
		f = f * m;
		m = m + 1;
	}
	cout << "Factorial of " << n <<" = "<<f;
}