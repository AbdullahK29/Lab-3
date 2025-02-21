
//-----------------Example 3.1------------------

/*#include<iostream>
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
}*/

//-----------------Example 3.2------------------

/*#include<iostream>
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
}*/


//-----------------Exercise 3.1------------------

/*#include<iostream>
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
	
}*/

//-----------------Exercise 3.2------------------

/*#include<iostream>
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
}*/


//-----------------Exercise 3.3------------------
//-----------------(a)------------------

/*#include<iostream>
using namespace std;

int number(int n)
{
	if (n==0) {
		
		cout << n << endl;
		exit (1);
	}
	cout << n << endl;
	return (number(n - 1));
}

int main() {

	number(10);

	return 0;
}*/


/*#include<iostream>
using namespace std;

int Binomial(int k, int n) {

	if (n == 0) {
		return 1;
	}
	else if (n == k) {
		return 1;
	}
	else if (n > 1 && k > 0) {
		return (Binomial(n-1,k-1)+ Binomial(n - 1, k ));
	}
}

int main() {

	cout<<Binomial(6, 3);

	return 0;
}*/