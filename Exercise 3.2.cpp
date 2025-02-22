//-----------------Exercise 3.2------------------

#include<iostream>
using namespace std;

long Ackerman(int m, int n)
{
	if (m == 0) {
		return (n + 1);
	}
	else if (m > 0 && n == 0) {
		return (Ackerman(m - 1, 1));
	}
	else if (m > 0 && n > 0) {
		return Ackerman(m - 1, Ackerman(m ,n - 1));
	}
}

int main() {

	cout << Ackerman(3, 4) << endl;

	return 0;
}