#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	long int t;
	cin>>t;
	while(t--){
	    long int n,m;
	    cin>>n>>m;
	    long int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    long int ans=0;
	    for(int i=0;i<n;i++){
	        ans += max(abs(a[i]-1),abs(a[i]-m));
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
