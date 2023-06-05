#include "../../std_lib_facilities.h"

/*
shortest way in my opinion to compare three numbers without involving pointers or library functions or temp variables
*/
// xor swap supremacy
void main()
{
	cout << "Enter your three numbers (seperated by a whitespace): ";
	int a, b, c;
	cin >> a >> b >> c;

	if (a > c)
		a = a ^ c, c = a ^ c, a = a ^ c;

	if (b > c)
		b = b ^ c, c = b ^ c, b = b ^ c;

	if (a > b)
		a = a ^ b, b = a ^ b, a = a ^ b;

	cout << "sorted order ==> "
		<< a << " < " << b << " < " << c;
}