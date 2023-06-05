#include "../../std_lib_facilities.h"

/*
easiest way in my opinion to compare three numbers without involving pointers or library functions
*/
int main()
{
	cout << "Enter your three numbers (seperated by a whitespace): ";
	int a, b, c;
	cin >> a >> b >> c;
	int small = a, mid = b, large = c, buffer;

	if (small > large)
		small = c, large = a;

	if (mid > large)
		mid = large, large = b;

	if (small > mid)
		buffer = small, small = mid, mid = buffer;

	cout << "sorted order ==> "
		<< small << " < " << mid << " < " << large;
}
