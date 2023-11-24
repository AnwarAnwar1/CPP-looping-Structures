//Q#5: Write a program that take a positive number from user and print it's table.

#include <iostream>
using namespace std;
int main() {
	int i = 1, n;
	
		cout << "Enter a number whose you want to print a table:";
		cin >> n;
		while (i <= 10)
		{
			cout << n << " * " << i << " = " << i * n << endl;
			i++;
		}
	} 