/* Q#11: Program that take a input from user and check whether the number is Armstrong or not. Hint (Armnuber=3^3+7^3+1^3=371 so 371 is Armnumber). */

#include <iostream>
using namespace std;
int main(){
	int Num,n ,Arm, sum=0;
	cout << "Enter a number whose you want to check either it is Armnumber or not = ";
	cin >> Num;
	Num=n;
	while (Num!=0)
	{
		Arm = Num % 10;
		sum =sum+(Arm * Arm * Arm);
		Num= Num/10;
	}
	if (n == sum)
		cout << "Your Number is an Armnumber.";
	else
		cout << "Your Number is an not an Armnumber.";

}