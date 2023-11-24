//Q#4: Write a program that display first 5 numbers and their squares.

#include <iostream>
using namespace std;
int main() {
	int i = 1;
	cout<<"Numbers\tSquares\n";
	while (i<=5)
	{
		cout << i << "\t" << i * i << endl;
		i++;
	}
}