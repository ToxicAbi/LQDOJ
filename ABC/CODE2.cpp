#include<bits/stdc++.h>
#define ll long long
#define input(a) cin >> a;
#define output(a) cout << a
#define FOR(i, a, b) for(ll i = a; i <= b; i++)
#define FOD(i, a, b) for(ll i = a; i >= b; i--)
#define vt(a) vector<a>
#define st(a) stack<a>
#define qu(a) queue<a>
#define IOS ios_base::sync_with_stdio(false); cin.tie(0)
using namespace std;

ll n;
ll res = 0;

int main() {
    IOS;
    input(n);
    if(n == 1) res = -1;
    else res = res - (n - n / 2) + (2 * (n / 2));
    output(res);
    return 0;
}
