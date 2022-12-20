#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    float s,a,b,c;
	    cin>>s>>a>>b>>c;
	    float stock= s + (c*s/100);
	    if(stock>=a && stock<=b){
	        cout<<"YES"<<endl;
	    }
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
