#include <bits/stdc++.h>
#define deb(x) cout << #x << ": " << x << endl;
#define deb2(x, y) cout << #x << ": " << x << " ~ " << #y << ": " << y << endl;
#define in(n, arr)              \
    for (int i = 0; i < n; i++) \
    cin >> arr[i]
#define out_arr(n, arr)         \
    for (int i = 0; i < n; i++) \
    cout << arr[i]
#define op(n) cout << n << "\n"
#define lli long long int
#define here cout << "\nHERE\n"
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
using namespace std;

int main()
{

    // /*
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    // */
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        lli n;
        cin >> n;
        vector<lli> a(n);
        vector<lli> b(n-1);
        vector<lli> c(n-1);
        in(n, a);
        in(n - 1, b);

        if(n==2)
        {
            op(min((b[0] - a[0]), b[0] - a[1]));
        }
        else 
        {
            sort(a.begin(), a.end());
            sort(b.begin(), b.end());

            for (lli i = 0; i < n - 1; i++)
            {
                c[i] = b[i] - a[i];
            }

            op(*min_element(c.begin(), c.end()));
        }
    }
    return 0;
}