//adding two integer numbers.cpp
//addition program.
#include <iostream>
using namespace std;
int main()
{
	int integer1, integer2, sum;		//declaration.
	cout<<"Enter the first integer\n";	//prompt.
	cin>>integer1;
	cout<<"Enter the second integer\n";	//prompt
	cin>>integer2;						//reading 
	sum = integer1 + integer2;			//assignment.
	cout<<"The sum is: "<<sum<<endl;
	return 0;							//indicate the program has ended.
}
