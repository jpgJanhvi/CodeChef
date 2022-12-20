#include <iostream>
using namespace std;

int prime(int c)
{
    if(c==1)
        return 0;
    if(c==2)
        return 1;
        
    if(c%2==0)
        return 0;
        
        for(int i =3 ; i*i<=c;i+=2)
            if(c%i==0)
                return 0;
                
            return 1;
}

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        
        for(int i=m;i<=n;i++)
            if(prime(i))
                cout<<i<<endl;
        
    }    
}