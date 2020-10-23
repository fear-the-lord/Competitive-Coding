#include <iostream>

//#define int long long int 

using namespace std;

const int N = 100005, M = 22; 
int a[N], prime_count[N], mobius[N];

void cal_mobius() {
	int i, j; 
	for(i = 1; i < N; i++) {
		a[i] = 1;
	}
	for(i = 2; i < N; i++) {
		if(prime_count[i]) continue;
		for(j = i; i < N; j += i) {
			prime_count[j]++;
			a[j] *= i;
		}
	}
	for(i = 1; i < N; i++) {
		if(a[i] == i) {
			// Square free number 
			if(prime_count[i] %2 == 0) {
				mobius[i] = -1;
			} else {
				mobius[i] = 1;
			}
		} else {
			mobius[i] = 0;
		}
	}
}

void solve() {
	int i;
	cal_mobius();
	for(i = 1; i < 30; i++) {
		cout << mobius[i] << " ";
		cout << "HEHEHEHEH";
	}
}


int main() {
	
	#ifndef ONLINE_JUDGE 
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	solve();
	return 0;
}
