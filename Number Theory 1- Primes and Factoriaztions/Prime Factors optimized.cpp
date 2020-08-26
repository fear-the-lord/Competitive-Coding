#include<iostream>
#include<vector>
#include<bits/stdc++.h> 

using namespace std;

vector <pair<int, int>> factors; 

void prime_factors(int n) {
	int count = 0;
	for(int i = 2; i*i <= n; i++) { 
		if(n % i == 0) {
			// keep on dividing by i till it is divisible 
			while(n % i == 0) {
				count++;
				n = n / i; 
			}
			factors.push_back(make_pair(i, count));
		}
	}
	// whatever is left is a prime number in itself 
	if(n != 1) {
		factors.push_back(make_pair(n, 1));
	}
	
	for(auto x:factors) {
		cout << x.first << "^" << x.second << endl; 
	}
} 

int main() {
	
	#ifndef ONLINE_JUDGE 
		freopen("input.txt", "r", stdin); 
		freopen("output.txt", "w", stdout); 
	#endif
	
	int n; 
	cin >> n; 
	prime_factors(n); 
	return 0; 
}
