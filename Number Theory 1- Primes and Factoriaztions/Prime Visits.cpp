#include<iostream>
#include<bits/stdc++.h>

using namespace std; 
#define ll long long

void prime_sieve(ll *p) {
	for(ll i = 3; i <= 1000000; i += 2) {
		p[i] = 1; 
	}
	
	for(ll i = 3; i <= 1000000; i += 2) {
		if(p[i] == 1) {
			for(ll j = i * i; j <= 1000000; j += i) {
				p[j] = 0;
			}
		}
	}
	
	p[1] = p[0] = 0; 
	p[2] = 1;
}

int main() {
// 	#ifndef ONLINE_JUDGE 
// 		freopen("input.txt", "r", stdin);
// 		freopen("output.txt", "w", stdout);
// 	#endif
	

	ll p[1000005] = {0};
	// Stores the cumulative sum 
	ll csum[1000005] = {0};
	prime_sieve(p);

	for(int i = 1; i <= 1000000; i++) {
		csum[i] = csum[i - 1] + p[i];
	}
	
	int q; 
	cin >> q;
	while(q--) {
	    ll a, b; 
	    cin >> a >> b;
	    cout << csum[b] - csum[a - 1] << endl;
	}
	return 0;	
}
