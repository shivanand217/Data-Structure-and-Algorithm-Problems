#include <bits/stdc++.h>

#define mp make_pair
#define ll long long
#define pb push_back

#define ss second
#define ff first
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

typedef pair<int,int> pii;

const int mxx = 100001;
// special value of infinity to take for getting rid of overflows
const int inf = 0x3f3f3f3f;

/******************* Problem Code *****************/

int main() {
    fast;
    string s;
    int p = 1000;

    while( cin>>s ) {
        int min_ = INT_MAX;
        int cnt1=0,cnt2=0,cnt3=0,cnt4=0;
        for(int i = 0; i<s.length(); i+=2) {
            if(islower(s[i])){
                cnt1++;
            }
        }
        for(int i=1; i<s.length(); i+=2){
            if(isupper(s[i])){
                cnt2++;
            }
        }
        for(int i=0; i<s.length(); i+=2){
            if(isupper(s[i])){
                cnt3++;
            }
        }
        for(int i=1; i<s.length(); i+=2){
            if(islower(s[i])){
                cnt4++;
            }
        }

        int ans = min( (cnt1+cnt2), (cnt3+cnt4) );

        cout<<ans<<endl;
    }
    return 0;
}
