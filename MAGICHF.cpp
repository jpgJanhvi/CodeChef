#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long int n,x,s,a,b;
	    cin>>n>>x>>s;
	    long int ans=x;
	    for(int i=0;i<s;i++){
	        cin>>a>>b;
	        if(ans==a){
	            ans=b;
	        }
	        else if(ans==b){
	            ans=a;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
