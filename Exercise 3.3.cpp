//-----------------Exercise 3.3------------------
//      -----------------(a)------------------

#include<iostream>
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
}

//-----------------Exercise 3.3------------------
//      -----------------(b)------------------

#include<iostream>
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
}


//-----------------Exercise 3.3------------------
//      -----------------(c)------------------

#include<iostream>
using namespace std;


	bool IsPrime(int n, int k) {

		if (k == n) return true;  

		if (n % k == 0) return false;  

		return IsPrime(n, k + 1);  
	}

int main() {

	int n, k = 2;

	cout << "Enter a number to check if it's prime or not: ";
	cin >> n;

	if (IsPrime(n, k)) {
		cout << n << " is a prime number." << endl;
	}

	else {
		cout<<n<< " is not a prime number." << endl;
	}

	return 0;
}