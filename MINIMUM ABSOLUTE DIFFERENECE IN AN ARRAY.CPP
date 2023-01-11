#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    int ans=abs(a[2]-a[1]);
    for(int i=2;i<=n;i++)
    {
        ans=min(ans,abs(a[i]-a[i-1]));
    }
    cout<<ans;
}
