#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int w1,w2,x1,x2,M;
	    cin>>w1>>w2>>x1>>x2>>M;
	    int d=w2-w1;
	    if(d>=x1*M && d<=x2*M)
	    cout<<"1"<<endl;
	    else 
	    cout<<"0"<<endl;
	}
	return 0;
}
