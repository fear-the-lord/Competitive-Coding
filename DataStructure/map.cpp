#include<bits/stdc++.h>
using namespace std;
int main(){
	map<string,int>m;
	m["s1"]=1;
	m["s2"]=2;
	m["s3"]=3;
	cout<<m["s2"]<<" ";
	//cout<<m["s4"]<<" ";
	for(auto x: m){
		cout<<x.first<<" "<<x.second<<" ";
	}
}