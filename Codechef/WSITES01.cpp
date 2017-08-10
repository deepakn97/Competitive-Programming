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
struct node{
	node* child[26];
	node (){
		FOR(i,0,25) this->child[i] = NULL;
	}
};
node* root = new node;
int n;
void insert(string s){
	node* trav = root;
	int len = s.size();
	int i = 0,j;
	while(i < len){
		j = s[i]-'a';
		if(trav->child[j] == NULL){
			trav->child[j] = new node;
		}
		i++;
		trav = trav->child[j];
	}
}
string search(string s){
	int len = s.size();
	node* trav = root;
	//bool flag = false;
	string ans = "";
	int i = 0,j;
	while(i < len){
		j = s[i]-'a';
		if(trav->child[j] == NULL){
			//cout << s[i] << endl;
			ans += (s[i]);
			return ans;
		}
		else 
		{
			ans+=s[i];
			trav= trav->child[j];
		}
		i++;
	}
	return "-1";
}	
int main()
{
	fast_io;
	//ifstream in_file("file.in");
	//ofstream out_file("file.out");
	cin >> n;
	vector<string> bl;
	FOR(i,0,n-1){
		char c; string s;
		cin >> c >> s;
		if(c == '-') bl.pb(s);
		else insert(s);
	}
	FOR(i,0,bl.size()-1){
		bl[i] = search(bl[i]);
		if(bl[i] == "-1"){
			cout << bl[i] << endl;
			return 0;
		}
	}
	sort(bl.begin(),bl.end());
	bl.resize(distance(bl.begin(),unique(bl.begin(),bl.end())));
	cout << bl.size() << endl;
	FOR(i,0,bl.size()-1) cout << bl[i] << endl;
	return 0;
}