//Prefix

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int>a(n),pref(n+1,0);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        pref[i+1]=pref[i]+a[i];
    }
    int m;cin>>m;
    for(int i=0;i<m;i++)
    {
        int l,r;cin>>l>>r;
        cout<<pref[r]-pref[l-1]<<endl;
    }
}