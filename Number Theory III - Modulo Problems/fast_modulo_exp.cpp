#include <iostream>
#include <bits/stdc++.h>

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

int main() {
	
	#ifndef ONLINE_JUDGE 
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	ll a, b, m; 
	cin >> a >> b >> m; 
	cout << fastModuloExp(a, b, m) << endl;
	return 0;
}
