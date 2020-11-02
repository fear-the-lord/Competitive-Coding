#include<iostream>
#define ll long long
using namespace std; 

ll fastModuloExp(ll a, ll b, ll m) {
	ll res = 1;
	while(b > 0) {
		// Checks if the last bit is 1
		if(b & 1) {
			res = res * a;
		}
		// Square a and right shift b by 1 bit
		a = a * a; 
		b = b >> 1;
	}
	ll ans = res % m;
	return ans;
}


ll solve(ll n, ll p) {
	ll ans = -1; 
	for(ll i = (n + 1); i <= (p - 1); i++) {
		ll temp = fastModuloExp(i, p - 2, p);
		ans = (ans * temp) % p;
	}
	return (ans + p);
}

int main() {
	ll t, n, p; 
	cin >> t; 
	while(t--) {
		cin >> n >> p;
		if(n == p) 
			cout << "0" << endl;
		else {
			cout << solve(n, p) << endl;
		}
	}
	return 0;
}
