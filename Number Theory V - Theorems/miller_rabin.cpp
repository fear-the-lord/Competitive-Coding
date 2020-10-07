#include<iostream>
#include<bits/stdc++.h>

using namespace std; 

#define int long long int 
#define ld lonf double 
#define F first
#define S second 
#define P pair<int, int>
#define pb push_back

const int N = 100005, M = 22; 

int modular_multiplication(int a, int b, int n) {
	int res = 0;
	while(b) {
		if(b & 1ll) {
			res += a;
		}
		a *= 2;
		b /= 2;
		res %= n;
		a %= n;
	}
	return res;
}

int modular_exponentiation(int a, int b, int n) {
	int res = 1;
	while(b) {
		if(b & 1ll) {
			res = modular_multiplication(res, a, n);
			res %= n;
		}
		a = modular_multiplication(a, a, n);
		a %= n;
		b /= 2;
	}
	return res;
}

bool miller_rabin(int n) {
	if(n == 1) return false; 
	if(n == 2) return true;
	if(n % 2 == 0) return false; 
	// now n is odd so n - 1 is even
	int d = n - 1; 
	int s = 0;
	while(d % 2 == 0) {
		s++;
		d /= 2;
	}
	// n - 1 = d * pow(2, s)
	// d is an odd number 
	vector<int> a({2, 3, 5, 7, 11, 13, 17, 19, 23});
	// a represents a random number
	for(int i = 0; i < a.size(); i++) {
		if(a[i] > n - 2) continue;
		// (a[i] ^ d) % n
		int ad = modular_exponentiation(a[i], d, n);
		if(ad % n == 1) continue;
		bool prime = false;
		for(int r = 0; r <= s - 1; r++) {
			// (2 ^ r) % n
			int rr = modular_exponentiation(2, r, n);
			// (a ^ (d * 2 * i)) % n
			int ard = modular_exponentiation(ad, rr, n);
			if(ard % n == n- 1) {
				prime = true;
				break;
			}
		}
		if(prime = false) return false;
	}
	return true;
}

void solve() {
	int n;
	cin >> n;
	if(miller_rabin(n)) {
		cout << "Prime" << endl;
	} 
	else {
		cout << "Non-Prime" << endl;
	}
}

void init() {
	ios_base:: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

int32_t main() {
	init();
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
