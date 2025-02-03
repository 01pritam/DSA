//Prefix

#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
    int n,k;cin>>n>>k;
    int cnt=0;
    vector<int>a(n),pref(n+1,0);
    map<int,int>mp;
    mp[0]++;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        pref[i+1]=pref[i]+a[i];
        if(mp[pref[i+1]-k]>0)
        {
            cnt+=mp[pref[i+1]-k];
        }
        mp[pref[i+1]]++;
    }
    cout<<cnt<<endl;
}