#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	int n;
	cin >> n;
	
	ll a[n],m;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
	if(n&1)  m = a[n/2];
	else  m = a[n/2 - 1];
	
	ll ans = 0;
	
	for(int i = 0; i < n;i++){
		ans += abs(a[i]-m);
	}
	cout << ans << endl;
	
	return 0;
}
