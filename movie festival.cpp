#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<bitset>
#include<stack>
#include<queue>
#define M 1000000007
#define ll long long int
#define pb push_back
using namespace std;

bool cmp(pair<ll,ll>&a,pair<ll,ll> &b){
	return a.second < b.second;
}

int main()
{
	int n;
	cin >> n;
	
	ll a,b,ans = 1;
	
	vector < pair <ll,ll> > v;
	for(int i = 0;i < n;i++){
		cin >> a >> b;
		v.pb({a,b});
	}
	
	sort(v.begin(),v.end(),cmp);
	
	ll x = v[0].second;
	
	for(int i = 0;i < n;i++){
		if(v[i].first >= x){
			ans++;
			x = v[i].second;
		}
	}
	cout << ans << endl;
	
	return 0;
}
