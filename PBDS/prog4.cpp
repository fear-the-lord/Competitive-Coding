#include <bits/stdc++.h>


#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std; 
using namespace __gnu_pbds; 

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> new_tree; 

int main() 
{
	#ifndef ONLINE_JUDGE 
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout); 
	#endif 
	
	int n;
	cin >> n; 
	int a[n];
	
	for(int i = 0; i < n; i++) {	
		cin >> a[i];
	}
	
	new_tree nt; 
	int inversion_count = 0; 
	
	// For each element, it checks whether there are any elements greater than that element already present in the list.
	for(int i = 0; i < n; i++) { 
		inversion_count += nt.size() - nt.order_of_key(a[i]); 
		nt.insert(a[i]);		
	}
	
	cout << inversion_count << endl; 
	return 0; 
} 
