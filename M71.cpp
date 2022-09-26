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

string s;
ll res1 = 0;
ll res2 = 0;

int main() {
    input(s);
    FOR(i, 0, s.size() - 1){
        res1 += (s[i] % 2 == 0);
        res2 += (s[i] % 2 != 0);
    }
    output(res1);
    output(" ");
    output(res2);
    return 0;
}
