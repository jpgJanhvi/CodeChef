#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long int n;
	    cin>>n;
	    int rem,sum=0,sum2=0;
	    int tem=n;
	    while(n>0){
	        rem=n%10;
	        sum=sum+rem;
	        n=n/10;
	    }
	    n=tem+1;
	    while(n>0){
	        rem=n%10;
	        sum2=sum2+rem;
	        n=n/10;
	    }
	    if((sum%2==0 && sum2%2!=0)||(sum%2!=0 && sum2%2==0))
	    cout<<tem+1<<endl;
	    else 
	    cout<<tem+2<<endl;
	}
	return 0;
}
