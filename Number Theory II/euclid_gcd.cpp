#include <iostream>
#include<bits/stdc++.h>

using namespace std; 

// Euclidean Method
int gcd(int a, int b) {
	return b == 0 ? a : gcd(b, a % b);
}

// Calculate LCM using GCD
int lcm(int a, int b) {
	return (a * b) / gcd(a, b);	
}

// Extended Euclidean Method to calculate Ax + By = GCD(A, B)
int x, y;
void extended_euclidean(int a, int b) {
	int current_x, current_y, gcd;
	// Base Case 
	if(b == 0) {
		gcd = a; 
		x = 1; 
		y = 0;
		return;
	}
	
	// Recursive Case 
	extended_euclidean(b, a % b);
	current_x = y;
	current_y = x - (a / b) * y;
	
	x = current_x; 
	y = current_y;
}

int main() {
	
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	int a, b; 
	cin >> a >> b; 
	cout << "GCD = " << gcd(a, b) << endl; 
	cout << "LCM = " << lcm(a, b) << endl;
	
	extended_euclidean(a, b);
	cout << "x = " << x << " " << "y = " << y << endl; 
	return 0;
}
