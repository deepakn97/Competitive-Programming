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
int main()
{
	int n;
	cin >> n;
	n -= 10;
	int ans = 0;
	if(n == 1)
		ans = 4;
	else if(n >= 2 && n <= 9)
		ans = 4;
	else if(n == 10)
		ans = 4*4 - 1;
	else if(n == 11)
		ans = 4;
	else
		ans = 0;
	cout << ans << endl;
  	return 0;
}
