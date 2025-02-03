
#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
    vector<int>spf(101);
    vector<bool>v(101,true);
    for(int i=0;i<=100;i++)spf[i]=i;
    for(int i=2;i*i<=100;i++)
    {
        if(v[i])
        {
            for(int j=i*i;j<=100;j+=i)
            {
                if(v[j])
                    spf[j]=i;
                v[j]=false;
            }
        }
    }

    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)
    {   
        map<int,int>mp;
        while(a[i]>1)
        {
            int x=spf[a[i]];
            mp[x]++;
            a[i]/=x;
        }
        for(auto i:mp)
        {
            cout<<i.first<<" "<<i.second<<endl;
        }
    }
}