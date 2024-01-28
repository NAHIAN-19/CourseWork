#include <bits/stdc++.h>
using namespace std;
int main() {
    ifstream take("input.txt");
    fstream give("output.txt",ios::app);
    if (!take.is_open()||!give.is_open()) {
        cerr << "File not found." << endl;
        return 1;
    }
    string line;
    bool comment = false;
    while (getline(take, line)) {
        bool instr = false;
        string ans;
        for (size_t i = 0; i < line.size(); ++i) {
            if (line[i] == '"') {
                instr = !instr;
            }
            if (!instr && !comment && line[i] == '/' && i + 1 < line.size()) {
                if (line[i + 1] == '/') {
                    break;
                } else if (line[i + 1] == '*') {
                    comment = true;
                    ++i;
                    continue;
                }
            }
            if (!comment) {
                ans += line[i];
            } else if (line[i] == '*' && i + 1 < line.size() && line[i + 1] == '/') {
                comment = false;
                ++i;
            }
        }
        if (ans.size() > 0){
            cout << ans << endl;
            give << ans << endl;
        }
    }
    take.close();
    give.close();
    return 0;
}
