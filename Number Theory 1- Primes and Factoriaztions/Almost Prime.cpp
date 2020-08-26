// Almost Prime Codeforces 

#include<iostream> 
#include<bits/stdc++.h>
using namespace std; 

int sieve(int n) { 
	int pr[n + 1] = {}; 
	vector <int> primes; 
	int i, j; 
	for(i = 2; i <= n; i++) { 
		if(!pr[i]) {
			primes.push_back(i); 
			for(j = i; j <= n; j += i) {
				pr[j]++;
			}
		}
	}
	
	int ans = 0; 
	for(int i = 2; i <= n; i++) {
		if(pr[i] == 2) {
			ans++;
		}
	}
	return ans; 
}
int main() { 
	#ifndef ONLINE_JUDGE 
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif 
	int n; 
	cin >> n; 
	cout << sieve(n) << endl; 
}
