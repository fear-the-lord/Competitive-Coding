#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int>v = {5,1,89,10,13}; //dynamic array in c++
	sort(v.rbegin(),v.rend()); // sort the vector in decreasing order using sort function
	for(int i=0;i<v.size();i++){
		cout<<v.at(i)<<" ";
	}
}