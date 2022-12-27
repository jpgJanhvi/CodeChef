#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long int n;
	    cin>>n;
	    long int a[n];
	    long int sum=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    
	    for(int i=0;i<n-1;i++){
	        if(a[i]!=a[i+1]){
	        int d=abs(a[i]-a[i+1])-1;
	        sum=sum+d;
	        }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
