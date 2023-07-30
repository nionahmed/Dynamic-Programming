
///Find number of ways to write n as a sum of 1 and 3.
/// print ans modulo 10^9+7

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll N=200005, mod=1e9+7;

ll way[N];
ll numberOFways(ll n){
    if(n<=2) return way[n]=1;
    if(n==3) return way[n]=2;

    if(way[n]!=-1) return way[n];
    way[n]=(numberOFways(n-1)+numberOFways(n-3))%mod;


    return way[n];

}


void solve()
{
    ll n; cin>>n;
//    memset(way, -1, sizeof way);
//    cout<<numberOFways(n)<<endl;  /// recursive way
    memset(way, 0, sizeof way);

    way[1]=1;
    way[2]=1;
    way[3]=2;
    for(int i=4; i<=n; i++){
        way[i]=(way[i-1]+way[i-3])% mod;
    }
    cout<<way[n]<<endl; /// iterative way

}

int main()
{
    ll t=1;
    cin>>t;
    for(ll i=1; i<=t; i++)
    {
        //cout<<"Case "<<i<<":"<<endl;
        solve();
    }
    return 0;
}


