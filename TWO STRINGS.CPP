#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p;
    cin>>p;
    for(int i=0;i<p;i++)
    {
        string s1,s2;
        cin>>s1;
        cin>>s2;
        set<char> s;
        for(int i=0;i<s1.size();i++)
        {
            s.insert(s1[i]);
        }
        bool flag = false;
        for(int i=0;i<s2.size();i++)
        {
            if(s.count(s2[i])==1)
            {
                flag = true;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
