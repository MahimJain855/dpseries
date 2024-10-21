#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f(ll n,vector<ll> &dp){
    if(n<=1) return 1;
    if(dp[n] !=-1) return dp[n];
    return dp[n]=f(n-1,dp)+f(n-2,dp);
    
}
int main(){
    ll n;cin>>n;
    vector<ll> dp(n+1,-1);
    cout<<f(n,dp);
}
//T.c and S.C:O(n)

// method 2 
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 1e7;
int main() {
    vector<ll> a(N);  
    a[0] = 0;
    a[1] = 1;

    for (ll i = 2; i < N; i++) {
        a[i] = a[i - 1] + a[i - 2];
    }

    ll n;
    cin >> n;

    cout << a[n] << endl;

    return 0;
}
