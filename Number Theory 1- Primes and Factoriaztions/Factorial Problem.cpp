#include<iostream>
#include<bits/stdc++.h>

using namespace std; 

void factorial(int n, int k) {
	int count = 0;
	long long int fact = 1; 
	for(int i = 1; i <= n; i++) {
		fact = fact * i;
	}
	while(fact % k == 0) {
		count++;
		fact = fact / k;
	}
	cout << count << endl;
}

int main() {
	
	#ifndef ONLINE_JUDGE 
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	int t; 
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		factorial(n, k);
	}	
	return 0;
}
