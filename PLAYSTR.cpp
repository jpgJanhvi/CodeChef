#include <iostream>
using namespace std;

int main() {
	int t ;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s,r;
	    cin>>s;
	    cin>>r;
	    int c=0,cnt=0,ct=0,count=0;
	    for(int i=0;i<s.length();i++){
	        if(s[i]=='1'){
	            c++;
	        }
	        else 
	        cnt++;
	    }
	    for(int i=0;i<r.length();i++){
	        if(r[i]=='1'){
	            ct++;
	        }
	        else 
	        count++;
	    }
	    if(c==ct && cnt==count)
	    cout<<"YES"<<endl;
	    else 
	    cout<<"NO"<<endl;
	}
	return 0;
}
