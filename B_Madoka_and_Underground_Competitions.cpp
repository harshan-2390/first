#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k,r,c;
    cin>>n>>k>>r>>c;
    char arr[r][c];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            // if(i==r-1&&j==c-1)arr[i][j]='X';
            arr[i][j]='.';
        }
    }
    int x=c-1;
    while(x>0){
        for(int i=r-1;i<n;i++){
            arr[i][x--]='X';
        }
        for(int i=r-1;i>=0;i--){
            arr[i][x--]='X';
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
int32_t main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    long long int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}