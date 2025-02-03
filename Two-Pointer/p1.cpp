#include<iostream>
#include<vector>
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
    while(i<n&&j<n)
    {
        sum+=v[j];
        while(sum>k)
        {
            sum-=v[i];
            i++;
        }
        cnt+=j-i+1;
        j++;
    }
    cout<<cnt<<endl;
}