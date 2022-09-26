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
ll f[100009];

int main(){
    input(n);
    f[1] = f[2] = 1;
    FOR(i, 3, n) f[i] = f[i - 1] + f[i - 2];
    FOR(i, 1, n){
        output(f[i]);
        output(" ");
    }
    return 0;
}
