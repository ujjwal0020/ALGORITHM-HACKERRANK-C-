#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,c,m,a;
        cin>>n>>c>>m;
        a=n/c;
        int r=a;
        while(1)
        {
            if(r>=m)
            {
                int q=r/m;
                r=r%m+q;
                a=a+q;
            }
            else break;
        }
        cout<<a<<endl;
    }
}
