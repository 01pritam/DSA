#include<iostream>
#include<map>
#include<vector>
#include<climits>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int>v(n);
    map<int,int>mp;
    int maxi=INT_MIN,mini=INT_MAX,minNum,maxNum;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        mp[v[i]]++;
        if(maxi<mp[v[i]])
        {
            maxi=mp[v[i]];
            maxNum=v[i];
        }
        if(mini>mp[v[i]])
        {
            mini=mp[v[i]];
            minNum=v[i];
        }
    }
    cout<<maxNum<<" "<<minNum<<endl;
}