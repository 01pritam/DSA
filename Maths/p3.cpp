#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
    int n;cin>>n;
    map<int,int>mp;
    vector<bool>v(n+1,true);
    for(int i=2;i*i<=n;i++)
    {
        if(v[i])
        {
            for(int j=i*i;j<=n;j+=i)
            {
                v[j]=false;
            }
        }
    }

    for(int i=2;i<=n;i++)
    {
        if(v[i])
        {
            cout<<i<<" ";
        }

    }
    cout<<endl;
}