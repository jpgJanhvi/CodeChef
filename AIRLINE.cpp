#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	long int t;
	cin>>t;
	while(t--){
	    int a,b,c,d,e;
	    cin>>a>>b>>c>>d>>e;
	    if(a+b<=d && c<=e )
	    cout<<"YES"<<endl;
	    else if(b+c<=d && a<=e)
	    cout<<"YES"<<endl;
	    else if(c+a<=d && b<=e)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
