#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
    int n;cin>>n;
    map<int,int>mp;
    vector<bool>v(n,true);
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            int cnt=0;
            while(n%i==0)
            {
                cnt++;
                n/=i;
            }
            mp[i]=cnt;
           
        }
    }
    for(auto i:mp)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
}