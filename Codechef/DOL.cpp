#include<bits/stdc++.h>
#define mp make_pair
#define ll long long
#define pb push_back
#define si(x) scanf("%d",&x)
#define slli(x) scanf("%lld",&x)
#define pi(x) printf("%d",x)
#define mx5 100005
#define mx6 1000006
#define mod 1000000007
#define rep(i,n) for(int i=0; i<n; i++)
#define fast std::ios::sync_with_stdio(false)
#define gc() getchar()
#define pc(x) putchar(x)
using namespace std;

int main() {
    int t;
    si(t);
    ll n;
    for(ll i=1; i <= t; i++) {
        slli(n);
        while(n%2 == 0) {
            n /= 2;
        }
        //cout<<"Case "<<i<<": "<<n<<endl;
        printf("Case %d: %lld\n",i,n);
    }
    return 0;
}
