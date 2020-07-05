#include <bits/stdc++.h>

using namespace std; 

bool odd_even(int n) {
	return (n & 1);
}

int get_bit(int n, int i) {
	int mask = (1 << i);
	n = n & mask; 
	return n;
}

int set_bit(int n, int i) { 
	int mask = (1 << i);
	return (n | mask);
}

int clear_bit(int n, int i) {
	int mask = ~(1 << i);
	return (n & mask);
}

int update_bit(int n, int i, int v) { 
	int mask = ~(1 << i);
	int cleared_bit = (n & mask);
	return cleared_bit | (v << i);
}

int main() {
	int n;
	cin >> n; 
	int i; 
	cin >> i;
//	if(odd_even(n) == 1)
//		cout << n << " is Odd" << endl;
//	else 
//		cout << n << " is Even" << endl;
//	int ans = get_bit(n, i);
//	if(ans == 0) {
//		cout << "The bit at position " << i << " of " << n << " is= 0" << endl;
//	}
//	else {
//		cout << "The bit at position " << i << " of " << n << " is= 1" << endl;
//	}

//	cout << "The value after setting the " << i <<"th bit of " << n << " is= " << set_bit(n, i) << endl;
//	cout << "The value after clearing the " << i << "th bit of " << n << " is = " << clear_bit(n, i) << endl;
	int v;
	cin >> v; 
	cout << "The value after updating the " << i << "th bit to " << v << " of " << n << " is= " << update_bit(n, i, v) << endl; 
	return 0;
}
