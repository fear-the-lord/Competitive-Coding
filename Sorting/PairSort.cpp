#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<pair<int,int>>v;
	v.push_back({1,5});
	v.push_back({10,100});
	v.push_back({5,25});
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++){
		cout<<"("<<v.at(i).first<<","<<v.at(i).second<<")"<<" ";
	}
}