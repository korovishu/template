#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(int i=a; i<b; i++)
#define pb push_back
#define vi vector<int>
#define vll vector<long long>

int gcd(int x, int y)
{
    if(x==0) return y;
    return gcd(y%x, x);
}

ll powM(ll x, ll y, ll m)
{
    if(y == 0) return 1;
    ll p = powM(x, y/2, m) % m;
    p = (p*p) % m;
    return (y%2 == 0) ? p : (x*p) % m;
}

int maxsum(int a[], int n)
{
    int mfar = INT_MIN, mend = 0;
    f(i, 0, n)
    {
        mend += a[i];
        if (mfar < mend) mfar = mend;
        if (mend < 0) mend = 0;
    }
    return mfar;
}

void pairsort(int a[], int b[], int n)
{
    pair<int,int> v[n];
    f(i, 0, n)
    {
        v[i].first=a[i];
        v[i].second=b[i];
    }
    sort(v, v+n);
    f(i,0,n)
    {
        a[i]=v[i].first;
        b[i]=v[i].second;
    }
}

bool isSubsetSum(int set[], int n, int sum)
{
   if (sum == 0) return true;
   if (n == 0 && sum != 0) return false;
   if (set[n-1] > sum) return isSubsetSum(set, n-1, sum);
   return isSubsetSum(set, n-1, sum) || isSubsetSum(set, n-1, sum-set[n-1]);
}

int minSumSeq(int arr[], int n, int k)
{
    int res = 0;
    f(i, 0, k) res += arr[i];
    int sum = res;
    f(i, k, n)
    {
       sum += arr[i] - arr[i-k];
       res = min(res, sum);
    }
    return res;
}

int maxSumSeq(int arr[], int n, int k)
{
    int res = 0;
    f(i, 0, k) res += arr[i];
    int sum = res;
    f(i, k, n)
    {
       sum += arr[i] - arr[i-k];
       res = max(res, sum);
    }
    return res;
}

char maxChar(char str[], int n)
{
    int count[1000] = {0};
    int max = 0;
    char result;
    f(i, 0, n)
    {
        count[(int)str[i]]++;
        if (max < count[(int)str[i]])
        {
            max = count[(int)str[i]];
            result = str[i];
        }
    }
    return result; 
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        
    }
    return 0;
}
