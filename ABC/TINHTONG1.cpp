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

int main(){
    input(n);
    output(((n * (n + 1)) / 2) * ((n * (n + 1)) / 2));
    return 0;
}
