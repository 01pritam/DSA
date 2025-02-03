#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int k;cin>>k;
    int cnt=0,sum=0,i=0,j=0;
    map<int,int>mp;
    while(i<n&&j<n)
    {
        mp[v[j]]++;
        while(mp.size()>k)
        {
            if(mp[v[i]]==1)
            {
                mp.erase(v[i]);
            }
            else 
                mp[v[i]]--;
            i++;

        }
        cnt+=j-i+1;
        j++;
    }
    cout<<cnt<<endl;
}