#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n],b[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>b[i];
	    }
	    int maxi=0;
	    int count=0;
	    for(int i=0;i<n;i++){
	        if(a[i] && b[i])
	        count++;
	        else 
	        count=0;
	        maxi=max(maxi,count);
	    }
	    cout<<maxi<<endl;
	}
	return 0;
}
