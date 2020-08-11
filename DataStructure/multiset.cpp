#include<bits/stdc++.h>
using namespace std;
int main(){
	multiset<int>m;
	m.insert(5);
	m.insert(5);
	m.insert(5);
	m.erase(m.find(5));
	cout<<m.count(5)<<"\n";
}