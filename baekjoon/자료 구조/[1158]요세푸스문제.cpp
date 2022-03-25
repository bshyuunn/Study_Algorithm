#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
    int n, k;
    int temp;
    cin >> n >> k;
    queue<int> q;
    
    for(int i=0; i<n; i++) {
        q.push(i+1);
    }
    
    cout << "<";
    while(q.size() > 1) {
        for(int i=0; i<k-1; i++) {
            temp = q.front();   
            q.pop();
            q.push(temp);            
        }
        temp = q.front();
        cout << temp << ", ";
        q.pop();
            
    }
    cout << q.front() << ">";
}