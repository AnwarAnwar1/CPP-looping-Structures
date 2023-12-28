//Q#9: Program that display the sum of that series: 1 + 1/2 + 1/4 + 1/6 +......+ 1/100.

#include <iostream>
using namespace std;
int main() {
	float C=1.0;
	int div=2;
	while (div<=100)
	{
		C =C+ 1.0/ div;
		div = div + 2;
	}
	cout << C;
}