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
ll a;
ll b;

int main() {
    IOS;
    input(q);
    for(; q > 0; q--){
        input(a);
        input(b);
        ll square = a * a;
        ll circle = 3.14 * b * b;
        if(square > circle) output("square");
        else output("circle");
        output("\n");
    }
    return 0;
}
