#include<iostream>
#include<map>
#include<vector>
#include<climits>
using namespace std;
int main()
{
    int n,k;cin>>n>>k;
    vector<int>v(n),pref(n+1,0);
    map<int,int>mp,countmax,countmin;
    int maxi=INT_MIN,mini=INT_MAX;
    mp[0]=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        pref[i+1]=pref[i]+v[i];
        if(mp.find(pref[i+1]-k)!=mp.end())
        {
            int len=i+1-mp[pref[i+1]-k];
            if(maxi<=len)
            {
                maxi=len;
                countmax[maxi]++;
            }
            if(mini>=len)
            {
                mini=len;
                countmin[mini]++;
            }
        }
        if (mp.find(pref[i + 1]) == mp.end()) { 
            mp[pref[i + 1]] = i + 1;  
        }
    }
    cout<<maxi<<" "<<countmax[maxi]<<" "<<mini<<" "<<countmin[mini]<<endl;

}