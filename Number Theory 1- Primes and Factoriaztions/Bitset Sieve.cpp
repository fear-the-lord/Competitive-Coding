#include<iostream> 
#include<bitset>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

#define ll long long 
ll n = 10000000;
bitset <10000000> b;
vector <int> primes;

void prime_sieve() {
	// Set all the bits first 
	b.set(); 
	// Special cases 
	b[0] = b[1] = 0; 
	for(ll i = 2; i <= n; i++) {
		if(b[i] == 1) {
			primes.push_back(i);
			for(ll j = i * i; j <= n; j += i) {
				b[j] = 0;
			}
		}
	}
}
int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif 
	
	int n; 
	cin >> n; 
	for(int i = 1; i <= n; i++) {
		cout << primes[i] << " ";
	}
	cout << endl;
}
