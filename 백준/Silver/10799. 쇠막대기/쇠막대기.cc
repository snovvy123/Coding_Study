#include <iostream>
#include <stack>
#include <string.h>
using namespace std;
stack<int> stk;
string str;
int cnt = 0;
int main() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> str;
    for(int i = 0; i < str.size(); i++) {
        if (str[i] == '(' && str[i+1] == ')') {
			cnt += stk.size();
			i++;
		}
        else if(str[i] == '(') stk.push('(');
        else if(str[i] == ')') {
            cnt++;
            stk.pop();
        }
    }
    cout << cnt << "\n";    
    return 0;
}