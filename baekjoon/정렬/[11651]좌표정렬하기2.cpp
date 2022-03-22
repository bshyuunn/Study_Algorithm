#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<vector<int>> arr(n, vector <int>(2, 0));    
    
    
    for(int i=0; i<n; i++) {
        cin >> arr[i][1];
        cin >> arr[i][0];
    }
    sort(arr.begin(), arr.end());
    
    for(int i=0; i<n; i++) {
        cout << arr[i][1] << " " << arr[i][0] << "\n";
    }
    
    return 0;
}