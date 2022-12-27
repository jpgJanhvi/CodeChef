#include <iostream>
using namespace std;

int main() {
	long int t;
	cin>>t;
	while(t--){
	    long int n,k;
	    cin>>n>>k;
	    if(n%2==1 && k==0 )     cout<<"NO"<<endl;
	    else     cout<<"YES"<<endl;
	}
	return 0;
}
