#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
int main() {
    string s;
    cin >> s;
    vector<string> balanced_strings;
    int count_L = 0, count_R = 0;
    string current_string = "";
    for (char c : s) {
        if (c == 'L') {
            count_L++;
        } else {
            count_R++;
        }
        current_string += c;
        if (count_L == count_R) {
            balanced_strings.push_back(current_string);
            current_string = "";
            count_L = 0;
            count_R = 0;
        }
    }
    cout << balanced_strings.size() << endl;
    for (string s : balanced_strings) {
        cout << s << endl;
    }
    return 0;
}