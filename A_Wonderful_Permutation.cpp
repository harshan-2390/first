// #include<bits/stdc++.h>
// using namespace std;
// int finding(vector<int> v,int p){
//     for(int i=0;i<v.size();i++){
//         if(v[i]==p)return i;
//     }
//     return 0;
// }
// void solve(){
//     int n,k;
//     cin>>n>>k;
//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     int ct=0;
//     for(int i=0;i<k;i++){
//         int p=i+1;
//         if(v[i]!=p){
//             int a=finding(v,p);
//             swap(v[i],v[a]);
//             ct++;
//         }
//     }
//     cout<<ct<<endl;
// }
// int32_t main(){
//     ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    set<int> s;
    for(int i=1;i<=k;i++){
        s.insert(i);
    }
    int ct=0;
    for(int i=0;i<k;i++){
        if(s.find(v[i])==s.end()){
            ct++;
        }
    }
    cout<<ct<<endl;
}
int32_t main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}