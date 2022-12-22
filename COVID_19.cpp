#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    int count=0;
	    int d=n/2 ,e=m/2;
	    if(n%2!=0 && m%2!=0){
	        cout<<(d+ 1)*(e+ 1)<<endl;
	    }
	    else if(n%2==0 && m%2==0){
	        cout<<d*e<<endl;
	    }
	    else if(n%2==0 && m%2!=0){
	        cout<<d*(e+ 1)<<endl;
	    }
	    else{
	        cout<<(d+ 1)*e<<endl;
	    }
	}
	return 0;
}
