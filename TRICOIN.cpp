#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long int n;
	    cin>>n;
	    int i=1;
	    while(i<=n){
	        n=n-i;
	        i++;
	    }
	    cout<<i-1<<endl;
	}
	return 0;
}
