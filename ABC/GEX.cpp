#include<bits/stdc++.h>
#define ll long long
#define input(a) cin >> a
#define output(a) cout << a
#define FOR(i, a, b) for(ll i = a; i <= b; i++)
#define FOD(i, a, b) for(ll i = a; i >= b; i--)
#define vt(a) vector<a>
#define st(a) stack<a>
#define qu(a) queue<a>
using namespace std;

ll q;
ll n;

int main() {
    input(q);
    for(; q > 0; q--) {
        input(n);
        output(round(sqrt(n - 1) - 0.5) + 1);
        output("\n");
    }
    return 0;
}
