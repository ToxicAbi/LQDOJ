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
    FOR(i, 1, n){
        FOR(j, 1, (n * 2 - 1) - (i * 2 - 1)) output(" ");
        FOR(j, 1, i * 2 - 1) output("*");
        output("\n");
    }
    return 0;
}
