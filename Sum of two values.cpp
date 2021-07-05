//we have to use map

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
using namespace std;
int main()
{
	int n;
	cin >> n;
	
	ll x,a;
	cin >> x;
	map <ll,ll> mp;
	for(int i = 0;i < n;i++){
		cin >> a;
		if(mp.find(x-a) != mp.end()){
			cout << mp[x-a]+1 << " " << i + 1 << endl;
			return 0;
		}
		mp[a] = i;
	}
	cout << "IMPOSSIBLE\n";
	
	
	return 0;
}
