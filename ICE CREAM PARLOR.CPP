#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int m,n;
        cin>>m;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]+a[j]==m)
                cout<<i+1<<" "<<j+1<<endl;;
            }
        }
    }
}
