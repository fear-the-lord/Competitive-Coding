#include<bits/stdc++.h>
using namespace std;
int main(){
	set<int>s;
	s.insert(5);
	s.insert(10);
    cout<<s.count(5)<<"\n";
    s.erase(5);
    cout<<s.count(5)<<"\n";
    for(auto x:s){
    	cout<<x<<" ";
    }
}