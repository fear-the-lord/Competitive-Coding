# Policy based Data Structures

The g++ compiler supports some data structures that are not part of the C++ standard library. Such data structures are called <b>Policy based data structures</b>. 
These data structures are designed for high performance, flexibility, semantic safety and conformance to the containers in std. 

```bash
GNU C++ Compiler (g++) is a compiler that Linux uses, which is used to compile C++ programs. 
It compiles both files with extension .c and .c++
```

Here, we will get to know more about Policy based data structures by following four simple steps: 
<ul> 
  <li>Declaration.</li> 
  <li>Headers and namespaces.</li> 
  <li>Important Functions.</li> 
  <li>Code.</li> 
</ul>

## Declaration 

The declaration if a Policy Based Data Structure is shown entirely in the file <b>prog1.cpp</b>. 
It uses a template in order to define the data structure.

## Headers and Namespaces 

There are basically two headers that are needed to be declared in order to implement PBDS: 
```cpp
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
```

The namespace that is used is: 
```cpp
using namespace __gnu__pbds; 
```

## Important Functions 
A policy based data structure works like a set and has all the functionalities of a set. It has two other very important functionalities: 
<ul> 
  <li>find_by_order(k)</li> 
  <li>order_of_key(key)</li> 
</ul> 

<b>find_by_order(k): </b>It returns the iterator to the k-th largest element. 
<br> 
<b>order_of_key(key): </b>It returns the number of elements that are strictly lesser than the mentioned element. 
<br> 
<b>All these operations are performed in O(log n) time.</b> 

## Code

Now, let's see a small code sample in order to understand the dollowing functions: 

```cpp 
// Normal header files 
#include<bits/stdc++.h> 

// Header files for policy based data structure 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std; 
using namespace __gnu_pbds; 

typedef tree <int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> new_data_set;

int main() {

	// Works only with unique values. 
	new_data_set s; 
	s.insert(1);
	s.insert(3);
	s.insert(4);
	s.insert(10);
	s.insert(15);

	for(int i = 0; i < s.size(); i++) { 
		cout << "The value at index " << i << " is: " << *s.find_by_order(i) << endl; 
	}
	
	cout << "The no:of elements strictly smaller than 5 is: " <<s.order_of_key(5) << endl; 
	return 0; 
}
```
Input:
```bash 
1 3 4 10 15
```

Output: 
```bash 
The value at index 0 is 1 
The value at index 1 is 3 
The value at index 2 is 4 
The value at index 3 is 10 
The value at index 4 is 15 
The no:of elements strictly smaller than 5 is: 3
```
