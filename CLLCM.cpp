#include <iostream>
using namespace std;

int main() {
	long int t;
	cin>>t;
	while(t--){
	    long int n;
	    cin>>n;
	    long int a[n];
	    int res=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	        if (a[i]%2==0 )
                res++;
	    }
	    if(res)
	    cout<<"NO"<<endl;
	    else 
	    cout<<"YES"<<endl;
	}
	return 0;
}
