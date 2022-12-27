#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int p[n],s[n],sum=0;
	    for(int i=0;i<n;i++)
	        cin>>p[i]>>s[i];
	        
	    for(int i=1;i<9;i++){
	        int max=0;
	        
	        for(int j=0;j<n;j++){
	            if(i==p[j] && s[j]>max){
	                max=s[j];
	            }
	        }
	        sum=sum+max;
	    }
	    cout<<sum<<endl;
	    
	}
	return 0;
}
