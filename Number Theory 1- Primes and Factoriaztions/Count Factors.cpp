#include<iostream> 
#include<vector>
#include<bits/stdc++.h>

using namespace std;

vector <int> factorcount; 

void count_divisors(int n) {
	int total = 1;
	for(int i = 2; i * i <= n; i++) {
		int count = 0; 
		if(n % i == 0) {
			while(n % i == 0) {
				count++; 
				n = n / i;
			}
			factorcount.push_back(count + 1);
		}
	}
	
	if(n != 1) {
		factorcount.push_back(2);
	}
	for(auto x:factorcount) {
		total = total * x;
	}
	cout << total << endl;
} 

int main() {
	
	#ifndef ONLINE_JUDGE 
		freopen("input.txt", "r", stdin); 
		freopen("output.txt", "w", stdout);
	#endif 
	
	int n; 
	cin >> n; 
	count_divisors(n); 
	return 0; 
}
