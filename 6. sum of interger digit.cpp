//Q#6: Write a program that input a interger and display the sum of digits. (Hint:33=6)

#include <iostream>
using namespace std;
int main() {
	int n,m,sum=0;
	cout << "Enter a number whose you want to see ditgital sum:";
	cin >> n;
	while (n>0)
	{
		m = n % 10;
		sum = sum + m;
		n = n / 10;
	}
	cout << "Digital sum=" << sum;
}