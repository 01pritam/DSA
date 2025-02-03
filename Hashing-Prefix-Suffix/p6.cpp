#include<iostream>
#include<vector>
#include<map>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    map<int,int>mp;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
        maxi=max(maxi,mp[a[i]]);
    }
    cout<<n-maxi<<endl;
}