#include<bits/stdc++.h>
using namespace std;
int main(){
	set<int>s;
	s.insert(1);
	s.insert(2);
	s.insert(3);
	for(auto i=s.begin();i!=s.end();i++){
		cout<<*i<<" ";
	}
}