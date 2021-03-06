#include <bits/stdc++.h>
using namespace std;

#define Pi 3.141592653589793
#define eps 1e-9
#define MAX int(1e9)
#define MIN int(-1e9)
#define SQR(n) ((n)*(n))
#define MEM(a,val) memset(a,val,sizeof(a))
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define vii vector< vector<int> >
#define pb push_back
#define F first
#define S second
#define SS stringstream
#define all(v) ((v).begin(),(v).end())
#define FOR(i,a,b) for(int i = a; i <= b; i++)
#define FORD(i,a,b) for(int i = b; i >= a; i--)
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
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int A[2*n+1];
		A[0] = 0;
		FOR(i,1,2*n)
		{
			cin >> A[i];
		}
		sort(A,A+2*n+1);
		int current = max(A[n],A[n+1]);
		if(A[n+2] > A[n+1])
		{
			current = A[n+2];
			swap(A[n+1],A[n+2]);
		}
		cout << current << endl;
		FOR(i,1,2*n)
		{
			if(i != 2*n)
				cout << A[i] << " ";
			else cout << A[i] << endl;
		}
	}
	return 0;
}