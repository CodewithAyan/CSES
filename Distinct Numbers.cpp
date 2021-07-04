//CSES Problem Set
//Sorting and Searching

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	int n;
	cin >> n;
	
	ll a[n],count = 0;
	for(int i = 0;i < n;i++) cin >> a[i];
	sort(a,a+n);
	for(int i = 0;i < n;i++){
		if(a[i] != a[i+1]) count++;
	}
	cout << count << endl;
	
	return 0;
}
