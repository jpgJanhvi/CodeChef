#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long int n,x;
	    cin>>n>>x;
	    int s,r;
	    int p=0;
	    for(int i=0;i<n;i++){
	        cin>>s>>r;
	        
	        if(s<=x){
	            p=max(r,p);
	        }
	    }
	    cout<<p<<endl;
	}
	return 0;
}
