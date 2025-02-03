#include<iostream>
using namespace std;
#include<map>
#include<climits>
#include<vector>
int main()
{
    int n;cin>>n;
    vector<int>a(n);
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    int k;cin>>k;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(mp[a[i]]>0&&mp[k+a[i]]>0)
        {
            cnt++;
            mp[k+a[i]]--;
            mp[a[i]]--;
        }
        if(mp[a[i]]>0&&mp[a[i]-k]>0)
        {
            cnt++;
            mp[a[i]-k]--;
            mp[a[i]]--;
        }
    }
    cout<<cnt<<endl;
}
