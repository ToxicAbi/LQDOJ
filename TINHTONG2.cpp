#include<bits/stdc++.h>
#define ll long long
#define input(a) cin >> a;
#define output(a) cout << a
#define FOR(i, a, b) for(ll i = a; i <= b; i++)
#define FOD(i, a, b) for(ll i = a; i >= b; i--)
#define vt(a) vector<a>
#define st(a) stack<a>
#define qu(a) queue<a>
using namespace std;

ll n;
ll q;
ll res = 1;

int main() {
    input(n);
    input(q);

    FOR(i, 1, n){
        ll temp = pow(q, i);
        if(i % 2 != 0) res = res - temp;
        else res = res + temp;
    }

    output(res);
    return 0;
}
