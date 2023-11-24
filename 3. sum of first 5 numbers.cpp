//Q#3: Write a program that disply first 5 numbers and their sum.

#include <iostream>
using namespace std;
int main() {
	int i = 1, sum=0;
	while (i<=5)
	{
		cout <<i<<endl;
		sum = sum + i;
		i++;
	}
	cout << "Sum=" << sum;
}