//
#include <iostream>

using namespace std;

int f(unsigned so) {
	cout << so % 10; 
	if (so / 10 == 0)
		return 0;
	else
		return f(so / 10);
}

int main()
{
	cout << "\nNguyen Van Thinh 20194178\n" << endl;
	cout << f(456);
	cout << "\n" << endl;
	return 0;
}