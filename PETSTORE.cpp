#include <iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--){
     int n;
     cin>>n;
     int a[n],fr[101]={0};
     for(int i=0;i<n;i++){
         cin>>a[i];
     }
     for(int i=0;i<n;i++){
         fr[a[i]]++;
     }
     int flag=0;
     for(int i=0;i<101;i++){
         if(fr[i]%2!=0){
             flag=1;
         }
         else 
         continue;
     }
     if(flag==1)   cout<<"no "<<endl;
     else    cout<<"yes"<<endl;
  }
    return 0;
}