#include <bits/stdc++.h>
#define DEBUG true
#define int long long
#define inf 0x3f3f3f3f3f3f3f3f
#define endl '\n'
using namespace std;



signed main() {

    if(!DEBUG){
        ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    }
    else{
        (void)freopen("test.in", "r", stdin);
        (void)freopen("test.out", "w", stdout); 
    }  

    int n;
    cin >> n;
    vector <int> list (n+1);
    for (int i = 1; i <= n; i ++){
        cin >> list[i];
    }
    sort(list.begin(), list.end());
    int ans = 1;
    for (int j = 2; j <= n; j ++){
        if (list[j] > list[j-1]){
            ans ++;
        }
    }
    cout << ans << endl; 



}