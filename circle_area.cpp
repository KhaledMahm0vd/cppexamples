//find the area of a circle.
//circlearea.cpp
//Khaled Mahmoud, 2021.
#include <iostream>
using namespace std;
int main()
{
	float rad;										//float type.
	const float pi = 3.14159F;						//const float type.
	cout<<"Enter the radius of a circle: ";			//message display.
	cin>>rad;										//get radius.
	float area = pi * rad * rad;					//calculate the area.
	cout<<"The area is: "<<area <<endl;				//display result.
	return 0;
}
