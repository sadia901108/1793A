#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,n,m;
        cin>>a>>b;
        cin>>n>>m;
        if(m>=n) cout<<n*min(a,b)<<endl;
        else if((m*a)<=(m+1)*b)
        {
            long long x=n/(m+1);
            long long y=x*m*a;
            long long z=n%(m+1);
            y=y+z*min(a,b);
            cout<<y<<endl;
        }
        else cout<<n*b<<endl;
    }
}
