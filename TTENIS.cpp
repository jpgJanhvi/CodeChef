#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int count=0,cnt=0;
	    for(int i=0;i<s.length();i++){
	        if(s[i]=='1')
	        count++;
	        else 
	        cnt++;
	    }
	    if(count>cnt)   cout<<"WIN"<<endl;
	    else     cout<<"LOSE"<<endl;
	}
	return 0;
}
