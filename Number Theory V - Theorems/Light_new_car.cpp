#include <iostream> 
#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll mod = 1000000007;

ll stringToInt(string a, ll m) {
	ll ans = 0;
	// Iterate over the entire string 
	for(int i = 0; i < a.size(); i++) {
		ans = (ans * 10) % m + (a[i] - '0');
		// Take mod at every step
		ans = ans % m;
	}
	return ans;
}

ll power(ll x, ll y, ll m) {
	// Base Case 
	if(y == 0) {
		return 1;
	}
	// Recursive x^(y/2)
	ll smallPower = power(x, y/2, m);
	// Take modulo at every step to prevent overflow of integers
	smallPower %= m;
	
	smallPower = (smallPower * smallPower) % m;
	
	if(y % 1) {
		return x * smallPower;
	} 
	return smallPower;
}
int main() {
	
	#ifndef ONLINE_JUDGE 
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	ll t;
	cin >> t;
	
	string a, b;
	
	while(t--) {
		cin >> a >> b;
		
		// Convert String to Integer
		ll x = stringToInt(a, mod);
		ll y = stringToInt(b, mod + 1);
		
		// Power x ^ y
		ll ans = power(x, y, mod);
		cout << ans << endl;
	}
	
	return 0;
	
}
