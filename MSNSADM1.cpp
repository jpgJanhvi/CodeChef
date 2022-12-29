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
	    for(int i=0;i<n;i++){
	        int mul=a[i]*20;
	        int foul=b[i]*10;
	        int c=mul-foul;
	        maxi=max(maxi,c);
	    }
	    cout<<maxi<<endl;
	}
	return 0;
}
