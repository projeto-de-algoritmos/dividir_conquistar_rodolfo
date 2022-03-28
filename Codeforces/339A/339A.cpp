#include<bits/stdc++.h>
 
using namespace std;
using lld = long long int;
using lu = size_t;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL); 
 
int main(void)
{
	string s;
	cin >> s;
	
	sort(s.begin(),s.end());
	
	for(lu a = s.find_last_of("+")+1 ; a < s.size();a++)
		cout << s[a] << (a+1 == s.size() ? "\n" : "+");
		
	return 0;
}

/*
 * https://codeforces.com/problemset/problem/339/A
 * */
