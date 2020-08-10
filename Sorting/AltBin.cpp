#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=5;
	int a[] = {1,2,3,4,5};
	int x;
	cout<<"Enter the element to be searched"<<endl;
	cin>>x;
	auto k = lower_bound(a,a+n,x)-a;
	if(k<n && a[k]==x) cout<<"Element Found"<<endl;
	else cout<<"Element not found"<<endl;
}