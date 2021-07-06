#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	
	sort(s.begin(),s.end());
	
	vector <string> s1;
	do{
		s1.push_back(s);
	} while(next_permutation(s.begin(),s.end()));
	
	cout << s1.size() << endl;
	
	for(int i = 0;i < s1.size();i++){
		cout << s1[i] << endl;
	}
	
	
	return 0;
}
