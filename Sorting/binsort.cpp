#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	vector<int>v = {1,2,3,4,5};
	cout<<"Enter the number to be search"<<endl;
	cin>>n;
	k=0;
	for(int b=(v.size()/2);b>=1;b/=2){
		while(k+b < v.size() && v[k+b]<=n) k+=b;
	}
	if(v[k]==n) cout<<"Element Found"<<endl;
	else cout<<"Element not found"<<endl;
}