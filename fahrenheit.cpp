//fahrenheit.cpp
#include <iostream>
using namespace std;
int main()
{
	int ftemp;			// for fahrenheit temperature.
	cout<<"Enter temperature in fahrenheit:	";
	cin>>ftemp;
	int ctemp;			// for celsius temperature.
	ctemp = (ftemp - 32)* 5/9;
	cout<<"Equivalent in Celsius is: "<<ctemp<<endl;
	return 0;
}
