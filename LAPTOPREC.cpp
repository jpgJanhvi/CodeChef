#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[1001],maxi=0,ans=-1;
	    int arr[11]={0};
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        arr[a[i]]++;
	        if(maxi<=arr[a[i]]){
	            ans=a[i];
	            maxi=arr[a[i]];
	        }
	    }
	    int k=0;
	    for (int i = 0; i <= 10; ++i)
        {
            if (maxi == arr[i])
                k++;
        }
        if (k > 1)
            cout << "CONFUSED" << endl;
        else
            cout << ans << endl;
	}
	return 0;
}
