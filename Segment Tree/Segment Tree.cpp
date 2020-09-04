#include <iostream> 
#include <bits/stdc++.h> 

using namespace std; 

void build_tree(int *arr, int s, int e, int *tree, int index) {
	// Base Case 
	if(s == e) {
		tree[index] = arr[s];
		return;
	}
	
	// Recursive Case 
	// Build the tree in a Postorder manner
	int mid = (s + e) / 2; 
	// 1. Build the Left Subtree
	build_tree(arr, s, mid, tree, 2 * index); 
	// 2. Build the Right Subtree
	build_tree(arr, mid + 1, e, tree, 2 * index + 1); 
	// 3. Build the root 
	tree[index] = min(tree[2 * index], tree[2 * index + 1]); 
	return; 
}

int main() {
	
	int arr[] = {1, 3, 2, -5, 6, 4};
	int n = sizeof(arr) / sizeof(int);
	int *tree = new int[4 * n + 1]; 
	build_tree(arr, 0, n - 1, tree, 1);
	
	// Print the tree 
	for(int i = 1; i <= 13; i++) {
		cout << tree[i] << " ";
	} 
	return 0;
}
