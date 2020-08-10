#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<tuple<int,int,int>>v;
	v.push_back(make_tuple(1,5,100));
	v.push_back(make_tuple(90,10,100));
	v.push_back(make_tuple(1,5,25));
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++){
		cout<<"("<<get<0>(v[i])<<","<<get<1>(v[i])<<","<<get<2>(v[i])<<")"<<" ";
	}
}