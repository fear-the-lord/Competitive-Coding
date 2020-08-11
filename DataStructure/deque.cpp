#include<bits/stdc++.h>
using namespace std;
int main(){
	deque<int>d;
	d.push_back(5);
	d.push_back(2);
	d.push_front(3);
	for(auto x:d){
		cout<<x<<" ";
	}
	cout<<"\n";
	d.pop_back();
	for(auto x:d){
		cout<<x<<" ";
	}
	cout<<"\n";
	d.pop_front();
	for(auto x:d){
		cout<<x<<" ";
	}
	cout<<"\n";
}