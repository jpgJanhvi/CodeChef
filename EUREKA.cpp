#include <iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    double d=(0.143)*n;
	    double p=pow(d,n);
	    cout<<round(p)<<endl;
	}
	return 0;
}
