#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string a;
	    string b;
	    cin>>a;
	    cin>>b;
	    int count=0,cnt=0;
	    for(int i=0;i<a.length();i++){
	        if(a[i]=='1')
	        count++;
	    }
	    for(int i=0;i<b.length();i++){
	        if(b[i]=='1')
	        cnt++;
	    }
	    if(count==cnt)
	    cout<<"YES"<<endl;
	    else 
	    cout<<"NO"<<endl;
	}
	return 0;
}
