#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
	if(n == 1)
		return false; 
	else if(n == 2)
		return true; 
	else 
	{
		for(int i = 2; i * i <= n; i++) {
			if(n % i == 0)
				return false;
		}
		return true;
	}	
}

void prime_sieve(int *p, int n) {
	//Mark all the odd numbers as possible primes
	for(int i = 3; i <= n; i += 2) {
		p[i] = 1;
	}
	
	for(int i = 3; i <= n; i += 2) {
		if(p[i] == 1) {
			for(int j = i * i; j <= n; j += i) {
				p[j] = 0;
			}
		}
	}
	p[2] = 1; 
	p[1] = p[0] = 0;	
}

int main() {
	#ifndef ONLINE_JUDGE 
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int n;
	cin >> n; 
	
//	bool ans = isPrime(n); 
//	if(ans == false)
//		cout << "Non Prime" << endl;
//	else
//		cout << "Prime" << endl;
	
	//Generate all prime numbers within range 1 - 100 using normal method 
	cout << "All Prime numbers within 1 - 100 using normal way are--->" << endl;
	for(int i = 1; i <= n; i++) {
		if(isPrime(i) == true)
			cout << i << " ";
	} 
	cout << endl;
	
	int p[1005] = {0};
	prime_sieve(p, n);
	cout << "All Prime numbers within 1 - 100 using Sieve of Eratosthenes method are---->" << endl; 
	for(int i = 1; i <= n ; i++) {
		if(p[i] == 1) 
			cout << i << " ";
	}
	return 0;
}
