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

ll q;
ll n;

int main() {
    IOS;
    input(q);
    for(; q > 0; q--){
        input(n);
        output((n + n - 1) / 2);
        output("\n");
    }
    return 0;
}
