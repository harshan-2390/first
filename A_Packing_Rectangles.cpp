#include <bits/stdc++.h>
using namespace std;

int binarysearch(vector<int> v, int target)
{
    int n = v.size();
    int lo = 0, hi = n - 1;
    while (hi >= lo)
    {
        int mid = lo + (hi - lo) / 2;
        if (v[mid] == target)
            return mid;
        else if (v[mid] > target)
            hi = mid - 1;
        else
            lo = mid + 1;
    }
    return -1;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> prices(n);
    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }
    sort(prices.begin(), prices.end());
    int q;
    cin >> q;
    vector<int> queries(q);
    for (int i = 0; i < q; i++)
    {
        cin >> queries[i];
    }
    // for (int i = 0; i < q; i++)
    // {
    //     int it = *lower_bound(prices.begin(), prices.end(), queries[i]);
    //     cout<<it<<endl;
    //     if (prices[0]>queries[i])
    //         cout << 0 << endl;
    //     else
    //     {
    //         int p = binarysearch(prices, it);
    //         cout << p + 1 << endl;
    //     }
    // }
    for(int i=0;i<q;i++){
        int hi=n;
        int target=queries[i];
        int lo=0;
        while(hi-lo>1){
            int mid=lo+(hi-lo)/2;
            if(prices[mid]<=target){
                lo=mid;
            }
            else hi=mid;
        }
        // cout<<lo<<" "<<hi<<endl;
        // cout<<prices[lo]<<endl;
        cout<<hi<<endl;


    }

    return 0;
}