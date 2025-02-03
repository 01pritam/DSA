//SPF

#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
    int n=100;
    vector<int>spf(n+1);
    vector<bool>v(n+1,true);
    for(int i=0;i<=n;i++)spf[i]=i;
    for(int i=2;i*i<=n;i++)
    {
        if(v[i])
        {
            for(int j=i*i;j<=n;j+=i)
            {
                if(v[j])
                    spf[j]=i;
                v[j]=false;
            }
        }
    }

    int k;cin>>k;
    cout<<spf[k]<<endl;
}