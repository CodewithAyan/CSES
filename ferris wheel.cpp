#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<bitset>
#define M 1000000007
#define ll long long int
using namespace std;
int main()
{
	ll n,x;
	cin >> n >> x;
	
	ll a[n];
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
	int ans = 0;
	//2 3 7 9
	for(int i=0,j=n-1;i<j;){
		while(i<j and a[i]+a[j]>x){
			--j;
		}
		if(i>=j) break;
		
		ans++,j--,i++;
	}
	
	cout << n - ans << endl;
	
	return 0;
}
