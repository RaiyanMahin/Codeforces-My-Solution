// RM
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
set < ll > st;
//ll b_s(ll a[] , ll l , ll r , ll x)
//{
//
//    while(l <= r)
//    {
//        ll m = l + (r - l) / 2;
//        if(a[m] == x)
//        {
//
//            return 1;
//
//        }
//        if(a[m] < x)
//        {
//            l = m + 1;
//
//        }
//        else
//        {
//            r = m - 1;
//        }
//    }
//    return -1;
//
//}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, k;  cin >> n >> k;

    for(ll i = 0; i < n; i++)
    {
        ll d; cin >> d;
        //mp[a[i]]++;
        st.insert(d);
    }


    while(k--)
    {
        ll X ; cin >> X;

        //ll ans = mp[X];
        if(st.count(X))
            cout << "YES\n";
        else
            cout << "NO\n";

    }




}

