#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]=i;
    }
    int q;cin>>q;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(mp.find(q+a[i])!=mp.end()&&mp[q+a[i]]<i)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
}