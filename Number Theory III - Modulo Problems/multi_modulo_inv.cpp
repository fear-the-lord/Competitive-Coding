#include <iostream>
#include <bits/stdc++.h>

using namespace std; 

int gcd(int a, int b) {
	return b == 0 ? a : gcd(b, a % b);
}

int x, y;
void extendedEuclidean(int a, int b) {
	int current_x, current_y, gcd;
	// Base Case 
	if(b == 0) {
		gcd = a; 
		x = 1;
		y = 0;
		return;
	}
	
	// Recursive Case
	extendedEuclidean(b, a % b);
	current_x = y;
	current_y = x - (a / b) * y;
	
	// Update Values
	x = current_x; 
	y = current_y;
}

int multiModuloInv(int a, int m) {
	if(gcd(a, m) == 1) {
		// The inverse exists
		extendedEuclidean(a, m);
		// To make the number positive
		return (x + m) % m;
	}
	else {
		cout << "The Multiplicative Modulo Inverse does not exist" << endl;
		return 0;
	}
}

int main() {
	
	#ifndef ONLINE_JUDGE 
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	int a, m;
	cin >> a >> m;
	cout << multiModuloInv(a, m) << endl;
	return 0;
}
