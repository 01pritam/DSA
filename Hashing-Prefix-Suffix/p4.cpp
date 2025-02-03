#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int> arr1(n),arr2(n);
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
        mp[arr1[i]]++;
    }
    int m;cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }
    bool flag=1;
    for(int i=0;i<m;i++)
    {
       if(mp[arr2[i]]==0)
       {
        flag=0;
        cout<<"NO"<<endl;
        break;
       }
    }
    if(flag)cout<<"YES"<<endl;
}
