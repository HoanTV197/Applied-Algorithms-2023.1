#include <bits/stdc++.h>
using namespace std;

int profit[4];

int main (){
    freopen("data.txt", "r" , stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T, ans = 0;
    cin >> T;
    while (T--)
    {
        /* code */
        ans = 0 ;
        cin >> profit[0] >> profit[1] >> profit[2] >> profit[3];
        sort(profit, profit + 4);
        if (profit[0] < 0) ans += profit[0];
        if (profit[1] < 0) ans += profit[1];
        cout << ans <<endl;

    }
    return 0;
    
}