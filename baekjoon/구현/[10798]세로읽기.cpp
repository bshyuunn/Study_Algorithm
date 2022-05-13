#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> v;
    
    for(int i=0; i<5; i++) {
        string temp;
        cin >> temp;
        
        v.push_back(temp);
    }
    
    for(int i=0; i<15; i++) {
        for(int j=0; j<5; j++) {
            if(i < v[j].size()) {
                cout << v[j][i];    
            }
            
        }
    }
}