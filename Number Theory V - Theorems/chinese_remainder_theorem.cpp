#include<iostream>
#include<bits/stdc++.h>

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

int product(int n, int num[]) {
	int prod = 1;
	for(int i = 0; i < n; i++) {
		prod = prod * num[i];
	}
	return prod;
}

int chineseRemainder(int n, int num[], int rem[]) {
	int prod = product(n, num);
	int sum = 0;
	for(int i = 0; i < n; i++) {
		sum = sum + (rem[i] * (prod / num[i]) * multiModuloInv((prod / num[i]), num[i]));
	}
	return sum % prod;
}

int main() {
	
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	int n; // No:of equations 
	cin >> n;
	int count = n;
	int num[100], rem[100];
	int i = 0;
	while(count != 0) {
		cin >> num[i] >> rem[i];
		i++;
		count--;
	}
	cout << chineseRemainder(n, num, rem) << endl;
	return 0;
}
