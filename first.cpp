// first.cpp
// a double slash indicates a single line comment.
// the first program in c++.
/* this program was coded by:
khaled mahmoud*/
/*
this is a multiple line comment.
*/
#include <iostream>	//must be written on a single line and then press Enter.
/*
#include is a preprocessor directive tells the compiler to insert another file besides your source file.
a preprocessor is part of compiler that deals with directives before real compilation process.
IOSTREAM is concerned by basic input/output operations containing declarations needed by cout, cin, endl.
IOSTREAM is a header file.
*/
using namespace std;
//using is a directive where cout, cin, endl are declared within it.
int main()	//if input is needed to be passed to function, we put it in paranthesis.
{
	cout<<"Welcome to\n c++!";	//	<<	insertion,		string constants cannot be broken into seperate lines.
	//using \n enters new line.
	return 0;	//indicates that the program ended successfully.
}
