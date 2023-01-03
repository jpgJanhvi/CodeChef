#include <iostream>
using namespace std;

int main() {
	long long int n;
	cin>>n;
	long long int c[n],sum=0;
	for(long long int i=0;i<n;i++){
	    cin>>c[i];
	    sum=sum+c[i];
	}
	if(sum==(n*(n+1))/2)
	cout<<"YES"<<endl;
	else 
	cout<<"NO"<<endl;
	
	return 0;
}
