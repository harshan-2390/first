#include<bits/stdc++.h>
using namespace std;

bool ispossible(vector<pair<pair<int,int>,int>> v,int mid ,int m){
    int n=v.size();
    int ct=0;
    // for(int i=0;i<n;i++){
    //     ct+=(mid/v[i].first.first);
    // }
    return m<=ct;
}
int32_t main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int m,n;
    cin>>m>>n;
    vector<pair<pair<int,int>,int>> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first.first>>v[i].first.second>>v[i].second;
    }
    int lo=0,hi=m*100;
    int mid;
    while(hi>lo+1){
        mid=lo+(hi-lo)/2;
        if(ispossible()){
            hi=mid;
        }
        else lo=mid;
    }
    cout<<hi<<endl;
    return 0;
}