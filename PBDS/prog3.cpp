// Normal header files 
#include<bits/stdc++.h> 

// Header files for policy based data structure 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std; 
using namespace __gnu_pbds; 

typedef tree <pair<int,int>, null_type, less< pair<int,int> >, rb_tree_tag, tree_order_statistics_node_update> new_data_set;

int main() {

	// pair{key, index}
	// Now it can contain duplicate values.
	new_data_set s; 
	s.insert({15, 0});
	s.insert({12, 3});
	s.insert({4, 1});
	s.insert({9, 5});
	s.insert({7, 6});
	s.insert({5, 3});
	s.insert({5, 2});

	for(int i = 0; i < s.size(); i++) { 
		cout << "The value at index " << i << " is: " << s.find_by_order(i)->first << " " << s.find_by_order(i)->second << endl; 
	}
	
//	cout << "The no:of elements strictly smaller than 5 is: " <<s.order_of_key(5) << endl; 

	return 0; 
}

