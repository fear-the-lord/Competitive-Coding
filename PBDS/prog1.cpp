// Header files 
// External policy based data structure 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

// This data structure is different because it contains a tree_order_statistics_node_update 

using namespace __gnu_pbds; 

// Declaration of tree_based_container 

template <
	// Key type (basically what type of value we want the template to store)
	typename key, 

	// Mapped policy. 
	// If it is null_type, then no duplicate elements will be allowed. It is mostly used. 
	typename Mapped, 

	// Key comparison function 
	typename Cmp_fn = std :: less <key>, 

	// Specifies the underlying data structure to use 
	typename tag = rb_tree_tag,

	template < 
	typename const_node_Iterator,
	typename node_Iterator,
	typename Cmp_fn_, 
	typename Allocator_ > 

	// A policy for updating node invariants. Most important part of a pbds. 
	class node_update = null_node_update, 

	// An Allocator type 
	typename Allocator = std :: allocator <char> >

	// Now we define a data structure using the above templates 
	class tree;

	// tree(key, Mapped, Cmp_fn, tag, node_update) 

	typedef tree <int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> new_data_set;