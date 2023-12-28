/* Q#10: Program that inputs a number and and display the sum of Even and Odd numbers from zero to that number. */

#include <iostream>
using namespace std;
int main(){

	int Num, EvenSum=0, OddSum=0;
	cout << "Enter a positive number whole Even and Odd sums you want to see = ";
	cin >> Num; cout<< endl;
	while (Num>=0)
	{
		if (Num % 2 == 0)
			EvenSum = EvenSum + Num;
		else
			OddSum = OddSum + Num;
		Num--;
	}
	cout << "The sum of Even Numbers is = " << EvenSum << endl;
	cout << "The sum of Odd Numbers is = " << OddSum << endl;
} 