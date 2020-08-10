#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int>v={1,2,3,4,5};
	int n,a,b,f,m;
	cout<<"Enter the number to be search"<<endl;
	cin>>n;
	a=0,b=v.size()-1,f=0;
	while(a<=b){
		m=(a+b)/2;
		if(v[m]==n){ 
			cout<<"Element found"<<endl;
			f++;
		}
		if(v[m] > n) b=m-1;
		else a=m+1;
	}
	if(f==0) cout<<"Element not found"<<endl;
}