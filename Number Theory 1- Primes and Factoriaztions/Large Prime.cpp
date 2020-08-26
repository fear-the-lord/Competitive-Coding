// The bitset sieve has a limitation that it can only work in the range of 10^7. 
// But, if we are given a number > 10^7 then we need to apply other concepts. 

#include <iostream>
#include <bits/stdc++.h>

#define ll long long 
using namespace std;

ll n = 10000000; 
bitset <10000000>b; 
vector <int> primes; 

void bitset_sieve() {
	b.set(); 
	b[0] = b[1] = 0;
	for (ll i = 2; i <= n; i++) { 
		if(b[i] == 1) {
			primes.push_back(i); 
			for(ll j = i * i; j <= n; j += i) {
				b[j] = 0;
			}
		}
	}	
}

int isPrime(ll number) { 
	if(number <= n) {
		return b[number] == 1 ? 1 : 0;
	}
	for(ll i = 0; primes[i] * (long long)primes[i] <= number; i++) {
		if(number % primes[i] == 0) {
			return 0;
		}
	}
	return 1; 
}
int main() {
	#ifndef ONLINE_JUDGE 
		freopen("input.txt", "r", stdin); 
		freopen("output.txt", "w", stdout);
	#endif 
	ll number; 
	cin >> number; 
	bitset_sieve();
	int ans = isPrime(number); 
//	for(int i = 0; i <= N; i++) { 
//		cout << primes[i] << " ";
//	}
	if(ans == 1) 
		cout << "Prime" << endl; 
	else 
		cout << "Non Prime" << endl; 
	return 0;
}


