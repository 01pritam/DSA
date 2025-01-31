//Problem-1 : We are given an array of positive integers(a[n]) . We are given multiple queries of the form : [x] which means we need to output the frequency of integer 'x' in the array. All numbers inside the array are from range [0,N-1].

#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
    int n,m;cin>>n>>m;
    vector<int>a(n);
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    for(int i=0;i<m;i++){
        int q;cin>>q;
        cout<<mp[q]<<endl;
    }
}