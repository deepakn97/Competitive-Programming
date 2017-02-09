#include <bits/stdc++.h>
using namespace std;

#define Pi 3.141592653589793
#define eps 1e-9
#define SQR(n) (n*n)
#define MEM(a,val) memset(a,val,sizeof(a))
#define vi vector<int>
#define vii vector< vector<int> >
#define pb push_back
#define F first
#define S second
#define SS stringstream
#define all(v) (v.begin(),v.end())
#define FOR(i,a,b) for(int i = a; i <= b; i++)
#define FORD(i,a,b) for(int i = b; i >= a; i--)
#define ll long long
#define ul unsigned long
#define READ freopen("input.txt", "r", stdin);
#define WRITE freopen("output.txt", "w", stdout);
#define fast_io ios_base::sync_with_stdio(false)
#ifdef _WIN32
#  define LLD "%I64d"
#else
#  define LLD "%lld"
#endif

ll mod(ll a, ll b) // calculates a%b, not remainder
{
	ll ans;
	if(b == 0)
		return -1;
	else
	{
		ans = (a<0 ? mod(((a%b)+b),b) : a%b);
	}
	return ans;
}

int main()
{
	fast_io;
	//ifstream in_file("file.in");
	//ofstream out_file("file.out");
	int n;
	cin >> n;
	int a[n];
	FOR(i,0,n-1)
	{
		cin >> a[i];
	}
	bool flag = false;
	FOR(i,0,n-3)
	{
		int x1,x2,x3,x4;
		x1 = min(a[i],a[i+1]);
		x2 = max(a[i],a[i+1]);
		FOR(j,i+1,n-2)
		{
			x3 = min(a[j],a[j+1]);
			x4 = max(a[j],a[j+1]);
			if((x1<x3 && x2 < x4 && x2 > x3) || (x3 < x1 && x4 < x2 && x4 > x1))
			{
				flag = true;
				break;
			}
			if(flag)
				break;
		}
	}
	cout << (flag ? "yes" :"no") << endl;
	return 0;
}