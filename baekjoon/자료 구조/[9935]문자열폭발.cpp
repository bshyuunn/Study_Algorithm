#include <iostream>
#include <string>
using namespace std;

string word, ans;
string boom;

string solve() {
    string answer = "";
    for(int i=0; i<word.size(); i++) {
        answer += word[i];
        if (word[i] == boom[boom.size()-1]) {
            int check = 0;
            for(int j=1; j<boom.size(); j++) {
                if(answer[answer.size()-1-j] != boom[boom.size()-1-j]) {
                    check = 1;
                    break;
                }
            }
            if(check==0) {
              for(int j=0; j<boom.size(); j++) {
                answer.pop_back();
              }  
          }
        }
    }

    return answer;
}

int main() {
    cin >> word >> boom;       

    ans = solve();
    if(ans.size() == 0) cout << "FRULA";
    else cout << ans;
}
