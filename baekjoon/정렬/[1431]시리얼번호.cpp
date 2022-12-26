#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int n;
vector<string> v;

bool compare(string a, string b) {
    // 길이 비교
    int a_size = a.size();
    int b_size = b.size();
    if (a_size != b_size) return a_size < b_size;

    // 숫자 합
    int a_sum = 0, b_sum = 0;
    for (int i = 0; i < a.size(); i++) {
        if ('0' <= a[i] && a[i] <= '9') a_sum += a[i] - '0';
    }
    for (int i = 0; i < b.size(); i++) {
        if ('0' <= b[i] && b[i] <= '9') b_sum += b[i] - '0';
    }
    if (a_sum != b_sum) return a_sum < b_sum;

    // 사전 정렬
    return a < b;
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        string temp;
        cin >> temp;
        v.push_back(temp);
    }

    sort(v.begin(), v.end(), compare);

    for (int i = 0; i < n; i++) {
        cout << v[i] << "\n";
    }
}
