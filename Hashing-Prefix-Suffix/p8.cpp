// #include<iostream>
// #include<vector>
// #include<map>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     map<int,int>mp;
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//         mp[a[i]]++;
//     }
//     int q;cin>>q;
//     bool flag=1;
//     for(int i=0;i<n;i++)
//     {
//         if(mp.find(q-a[i])!=mp.end())
//         {
//             cout<<"YES"<<endl;
//             flag=0;
//             break;
//         }
//     }
//     if(flag)cout<<"NO"<<endl;
// }




#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    set<int>s;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s.insert(a[i]);
    }
    int q;cin>>q;
    bool flag=1;
    for(int i=0;i<n;i++)
    {
        if(s.find(q-a[i])!=s.end())
        {
            cout<<"YES"<<endl;
            flag=0;
            break;
        }
    }
    if(flag)cout<<"NO"<<endl;
}