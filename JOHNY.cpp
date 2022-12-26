#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long int n,k,s,j;
	    cin>>n;
	    long int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    cin>>k;
	    for(int i=0;i<n;i++){
	        if(i==(k-1)){
	            s=a[i];
	        }
	    }
	    sort(a,a+n);
	    for(int i=0;i<n;i++){
	        if(s==a[i]){
	            cout<<i+1<<endl;
	            break;
	        }
	    }
	}
	return 0;
}
