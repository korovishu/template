#include <bits/stdc++.h>
#define ll long long
#define f(i, a, b) for(ll i=a; i<b; i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define LB lower_bound
#define UB upper_bound
using namespace std;

bool sortbysec(const pair<ll,ll> &a, 
              const pair<ll,ll> &b) 
{ 
    return (a.second < b.second); 
} 

ll findSubarraySum(ll arr[], ll n, ll sum = 0) 
{
    unordered_map<ll, ll> prevSum;
    ll res = 0;
    ll currsum = 0;
    for (ll i = 0; i < n; i++)
    {
        currsum += arr[i];
        if (currsum == sum) res++;
        if (prevSum.find(currsum - sum) != prevSum.end()) res += (prevSum[currsum - sum]);
        prevSum[currsum]++;
    }
    return res; 
} 
ll gcd(ll a, ll b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
  
ll findGCD(ll arr[], ll n) 
{ 
    ll result = arr[0]; 
    for (ll i = 1; i < n; i++)
        result = gcd(arr[i], result); 
  
    return result; 
} 
ll powmp(ll x, ll y, ll p) 
{ 
    ll res = 1;     x = x % p;   
    while (y > 0) 
    {  
        if (y & 1)  res = (res*x) % p; 
        y = y>>1; 
        x = (x*x) % p;   
    } 
    return res; 
} 

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    ll t; cin>>t;
    while(t--)
    {
    
    }
}
