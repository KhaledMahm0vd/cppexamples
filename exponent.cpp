//exponent(power).cpp
//c++ program to calculate exponent of number by getting inputs from user.
#include <iostream>
#include <cmath>		    //cmath is included to calculate power using pow function
using namespace std;    
int main()
{
	int integer1, power, result;
	
	cout<<"calculating exponent of number.\n";
	cout<<"Enter integer number\n";		//prompt.
	cin>>integer1;						//reading base number.
	cout<<"Enter exponent(power)\n";
	cin>>power;               //reading power number.
	result=pow(integer1, power);	//using pow function to calculate power by passing base "integer1" and exponent "power".
	cout<<"The result is: "<<result<<endl;
}
