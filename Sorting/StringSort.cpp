#include<bits/stdc++.h>
using namespace std;
bool comp(string a,string b){
	if(a.size()!=b.size()) return a.size() < b.size();
		return a < b;
}
int main(){
	vector<string>v={"indranil","banana","six","django"};
	sort(v.begin(),v.end(),comp);
	for(int i=0;i<v.size();i++){
		cout<<v.at(i)<<" ";
	}
}