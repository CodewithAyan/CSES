#include<iostream>
#include<vector>
#define ll long long int
#define pb push_back
using namespace std;
int main()
{
	ll n;
	cin >> n;
	
	vector <int> v1,v2;
	
	ll m = (n*(n+1))/2;
	
	if(m&1) cout << "NO" << endl;
	
	else {
		m /= 2;
		while(n){
			if(m-n >= 0){
				v1.pb(n);
				m -= n;
			}
			else {
				v2.pb(n);
			}
			n--;
		}
		
		cout << "YES" << endl;
		cout << v1.size() << endl;
		for(int i = 0;i < v1.size();i++) cout << v1[i] <<" ";
		cout << endl;
		
		cout << v2.size() << endl;
		for(int i = 0;i < v2.size();i++) cout << v2[i] <<" ";
	}
	
	return 0;
}
