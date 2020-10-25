#include<iostream>
#include<bits/stdc++.h> 

using namespace std; 

void multiply(int a[], int &n, int no) {
	int carry = 0; 
	int product = 1;
	for(int i = 0; i < n; i++) {
		product = a[i] * no + carry;
		a[i] = product % 10; 
		carry = product / 10; 
	}
	
	while(carry) {
		a[n] = carry % 10; 
		carry = carry / 10;
		n++;
	}
}
// Function definition

void factorial_big(int number) {
	int a[1005] = {0};
	a[0] = 1; 
	int n = 1; 
	for(int i = 2; i <= number; i++) {
		multiply(a, n, i);	
	}
	
	for(int i = n - 1; i >= 0; i--) {
		cout << a[i];
	}
	cout << endl; 
}

int main() {
	
	#ifndef ONLINE_JUDGE 
		freopen("input.txt", "r", stdin); 
		freopen("output.txt", "w", stdout);
	#endif 
	
	int n; 
	cin >> n; 
	factorial_big(n);
	return 0;
}
