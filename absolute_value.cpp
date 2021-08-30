#include <iostream>
using namespace std;
int main(){
	long number, number2;
	cout<<"enter an integer number: ";
	cin>>number;
	if (number < 0)
	number2 = -1 * number;
	else
	number2 = number;
	cout<<"The absolute value of "<<number<<" is: "<<number2;
}
