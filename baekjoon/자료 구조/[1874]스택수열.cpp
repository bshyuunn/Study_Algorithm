#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
using namespace std;

int main() {
    int x;
    int max = 0;
    int n;
    bool state = 1;
    stack<int> s;
    vector<char> result;
    
    cin >> n;
    
    for(int i=0; i<n; i++) {
        cin >> x;
        
        if(x > max) {
            for(int i=max+1; i<=x; i++) {
                s.push(i);
                result.push_back('+');
            }
        }
        else {
            if(s.top() != x) {
                state = 0;                
            }
        }
        s.pop();
        result.push_back('-');
        if(max < x) max = x;
        
    }
    if(state) for(int i=0; i<result.size(); i++) cout << result[i] << "\n";
    else cout << "NO";
    
    return 0;
}
