#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

bool comp_length(string s1, string s2) {
	if (s1.size() == s2.size()) return s1 < s2;
	else return s1.size() < s2.size();
}

int main() {
    vector<string> v;
    int n; 
    
    cin >> n;
	for (int i = 0; i < n; i++) {
		string tmp;
		cin >> tmp;
		v.push_back(tmp);
	}

	sort(v.begin(), v.end(), comp_length);

	v.erase(unique(v.begin(), v.end()),v.end());
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\n";
	}



	return 0;
}