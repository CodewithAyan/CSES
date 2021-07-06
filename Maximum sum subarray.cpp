#include<iostream>
#define ll long long int
using namespace std;
int main()
{
	int n;
	cin >> n;
	
	ll ans = -1e18, mx = -1e18;
	
	for(int i = 0;i < n;i++){
		ll a;
		cin >> a;
		
		mx = max(a,mx+a);
		ans = max(mx,ans);
	}
	cout << ans << endl;
}
