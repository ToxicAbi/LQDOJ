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

ll n;
ll res = 0;

int main() {
    input(n);
    while(n != 0){
        res = res * 10 + (n % 10);
        n /= 10;
    }
    output(res);
    return 0;
}
