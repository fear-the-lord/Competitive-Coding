// Problem 1234D CodeForces.
#include <bits/stdc++.h>


#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds; 

typedef tree<pair<int, int>, null_type, less<pair <int, int> >, rb_tree_tag, tree_order_statistics_node_update> new_tree; 

int main() 
{
	#ifndef ONLINE_JUDGE 
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout); 
	#endif 
	
	int n;
	cin >> n; 
	int a[n], b[n], c[n];
	
	for(int i = 0; i < n; i++) {	
		cin >> a[i];
	}
	
	for(int i = 0; i < n; i++) {
		cin >> b[i];
	}
	
	for(int i = 0; i < n; i++) { 
		c[i] = a[i] - b[i];
	}
	
	long long int good_pairs = 0; 
	
	new_tree nt; 
	for(int i = 0; i < n; i++) { 
		good_pairs += nt.size() - nt.order_of_key({-c[i], 10000000});
		nt.insert({c[i], i});
	}
	
	cout << good_pairs << endl; 
	return 0; 
}
