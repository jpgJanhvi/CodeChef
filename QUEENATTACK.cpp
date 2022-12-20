#include <iostream>
using namespace std;

int main(){
    long int t;
    cin>>t;
    while(t--){
        long int n,x,y;
        cin>>n>>x>>y;
        int temp=x-1 + n-y + n-x + y-1;
        int a=min(x-1,n-y);
        int b=min(n-y,n-x);
        int c=min(n-x,y-1);
        int d=min(y-1,x-1);
        temp=temp+a+b+c+d;
        cout<<temp<<endl;
    }
	return 0;
}
