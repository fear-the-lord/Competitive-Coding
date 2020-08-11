#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> v={1,2,3,4,5};
	sort(v.begin(),v.end());
	for(auto x:v){
		cout<<x<<" ";
	}
	cout<<"\n";
	reverse(v.begin(),v.end());
	for(auto x:v){
		cout<<x<<" ";
	}
	cout<<"\n";
	random_shuffle(v.begin(),v.end());
	for(auto x:v){
		cout<<x<<" ";
	}
	cout<<"\n";
}