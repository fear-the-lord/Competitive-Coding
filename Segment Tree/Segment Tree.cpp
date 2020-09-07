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

int query(int *tree, int s, int e, int qs, int qe, int index) {
	// Complete overlap 
	if(s >= qs && e <= qe) {
		return tree[index];
	}
	
	// No overlap 
	if(qe < s || qs > e) {
		return INT_MAX;
	}
	
	// Partial Overlap
	int mid = (s + e) / 2; 
	int left = query(tree, s, mid, qs, qe, 2 * index); 
	int right = query(tree, mid + 1, e, qs, qe, 2 * index + 1);
	return min(left, right);
}

void point_update(int *tree, int s, int e, int i, int increment, int index) {
	
	// Where the index does not lie within the range 
	if(i < s || i > e) {
		return; 
	}
	
	// Leaf nodes 
	if(s == e) {
		tree[index] += increment;
		return; 
	}
	
	int mid = (s + e) / 2; 
	point_update(tree, s, mid, i, increment, 2 * index);
	point_update(tree, mid + 1, e, i, increment, 2 * index + 1); 
	tree[index] = min(tree[2 * index], tree[2 * index + 1]); 
}

void range_update(int *tree, int s, int e, int qs, int qe, int increment, int index) {
	
	// Out of bounds 
	if(qs > e || qe < s) {
		return;
	}
	
	// Leaf nodes 
	if(s == e) {
		tree[index] += increment;
		return; 
	}
	
	int mid = (s + e) / 2; 
	range_update(tree, s, mid, qs, qe, increment, 2 * index); 
	range_update(tree, mid + 1, e, qs, qe, increment, 2 * index + 1); 
	tree[index] = min(tree[2 * index], tree[2 * index + 1]);
}

int main() {
	
	int arr[] = {1, 3, 2, -5, 6, 4};
	int n = sizeof(arr) / sizeof(int);
	int *tree = new int[4 * n + 1]; 
	build_tree(arr, 0, n - 1, tree, 1);
	
	// Print the tree 
//	for(int i = 1; i <= 13; i++) {
//		cout << tree[i] << " ";
//	} 
	
	point_update(tree, 0, n - 1, 3, 10, 1);
	range_update(tree, 0, n - 1, 3, 5, 10, 1);
	
	int q; 
	cin >> q; 
	while(q--) {
		int l, r; 
		cin >> l >> r; 
		cout << query(tree, 0, n - 1, l, r, 1);
	}
	return 0;
}
