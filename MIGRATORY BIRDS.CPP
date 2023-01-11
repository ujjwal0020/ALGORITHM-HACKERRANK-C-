#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,b=0,c=0,d=0,e=0,f=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==1) b++;
        else if(a[i]==2) c++;
         else if(a[i]==3) d++;
          else if(a[i]==4) e++;
           else if(a[i]==5) f++;
    }
   vector<int> p={b,c,d,e,f};
   int max=p[0];
   int s;
   for(int i=1;i<5;i++)
   {
       if(max<p[i])
       {
           max=p[i];
           s=i+1;
       }
   }
   cout<<s<<endl;
}
