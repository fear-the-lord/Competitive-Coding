#include<iostream> 
#include<vector>
#include<bits/stdc++.h>

using namespace std; 

const int N = 100000;

vector <int> primes;
int p[N] = {0};

void sieve() { 
	for(int i = 2; i <= N; i++) {
		if(p[i] == 0) {
			// store i in the primes vector
			primes.push_back(i);
			// mark all multiples of i as non prime
			for(int j = i; j <= N; j += 1) {
				p[j] = 1;
			}
		}
	}
}

int main() { 

	#ifndef ONLINE_JUDGE 
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout); 
	#endif

	sieve(); //build this sieve once for all
	int t;
	cin >> t; 
	while(t--) {
		int m, n;
		cin >> m >> n; 
		
		bool segment[n - m + 1];
		for(int i = 0; i < n - m + 1; i++) {
			segment[i] = 0;
		}
		
		// segmented sieve logic 
		for(int x:primes) {
				
			// stop the loop if remaining primes are not needed
			if((x * x) > n) {
				break;
			}
			
			// prime number lies in the segmented sieve range 
			if(x >= m and x <= n) {
				int start = 2 * x; 
			}
			
			int start = (m / x) * x; 
		
			for(int i = start; i <= n; i += x) {
				segment[i - m] = 1; 
			}		
		}	
		
		// Loop over the range m..n and print the primes 
		for(int i = m; i <= n; i++) {
			if(segment[i - m] == 0 and i != 1) {
				cout << i << endl; 
			}
		}
		cout << endl;
	}
	return 0;
}
