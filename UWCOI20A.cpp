#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long int n;
	    cin>>n;
	    int a[n];
	    int maxi=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	        if(a[i]>maxi){
	            maxi=a[i];
	        }
	    }
	    cout<<maxi<<endl;
	}
	return 0;
}
