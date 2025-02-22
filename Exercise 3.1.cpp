
//-----------------Example 3.1------------------

#include<iostream>
#include<conio.h>
using namespace std;

int fact(int n) {

	if (n == 0) {
		return 1;
	}
	else {
		return n * fact(n - 1);
	}
}

int main() {

	cout << fact(5) << endl;
	char ch = _getch();

	cout << static_cast<char>(ch) << endl;
	return 0;
}

//-----------------Example 3.2------------------

#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

void rev() {

	char ch;
	cin.get(ch);

	if (ch != '\n')
	{
		rev();
		cout.put(ch);
	}
}

int main() {

	rev();
	char ch = _getch();

	cout << static_cast<char>(ch) << endl;

	return 0;
}


//-----------------Exercise 3.1------------------

#include<iostream>
using namespace std;

long Power(int X, int N)
{
	if (N == 0) {
		return 1;
	}
	else {
		return (Power(X, N - 1) * X);
	}
}

int main() {

	int x=2, n=20;
	for(int i=0;i<=20;i++){

		cout << x<<"\t\t"<<i<<"\t\t"<<Power(x, i) << endl;
	}

}