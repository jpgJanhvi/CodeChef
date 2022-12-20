#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	long int t;
	cin>>t;
	while(t--){
	    long int n;
	    cin>>n;
	    long int a[n],count=0;
	    int flag=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n-1;i++){
	        if(a[i]>a[i+1]){
	            swap(a[i],a[i+1]);
	            break;
	        }
	    }
	    for(int i=0;i<n-1;i++){
	        if(a[i]>a[i+1]){
	            flag++;
	            break;
	        }
	    }
	    if(flag==1)
	    cout<<"no"<<endl;
	    else 
	    cout<<"yes"<<endl;
	}
	return 0;
}
