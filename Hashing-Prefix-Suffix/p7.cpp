#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bool flag=1;
    for(int i=0;i<n;i++)
    {
        if(mp.find(a[i])!=mp.end()&&i-mp[a[i]]<k)
        {
            flag=0;
            cout<<"YES"<<endl;
            break;
        }
        mp[a[i]]=i;
    }
    if(flag)cout<<"No"<<endl;

    
}