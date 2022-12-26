#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int sum=0;
	    for(int i=0;i<s.size();i++){
	        if(s[i]=='A'||s[i]=='D'||s[i]=='O'||s[i]=='P'||s[i]=='Q'||s[i]=='R'){
	            sum+=1;
	        }
	        else if(s[i]=='B')
	        sum=sum+2;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
