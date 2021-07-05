#include<iostream>
#define M 1000000007
#define ll long long int
using namespace std;
int main()
{
	int n;
	cin >> n;
	
	ll s = 1;
	
	for(int i = 0; i < n; i++){
		s = (2*s)%M;
	}
	cout << s << endl;
	
	return 0;
}
