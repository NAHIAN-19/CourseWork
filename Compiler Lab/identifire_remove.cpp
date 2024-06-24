#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define per(i, a, b) for (int i = (b)-1; i >= (a); --i)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
using namespace std;
typedef long long ll;
vector<string> keywords = {
        "alignas", "alignof", "and", "and_eq", "asm", "auto", "bitand", "bitor",
        "bool", "break", "case", "catch", "char", "char8_t", "char16_t", "char32_t",
        "class", "compl", "concept", "const", "consteval", "constexpr", "constinit",
        "const_cast", "continue", "co_await", "co_return", "co_yield", "decltype",
        "default", "delete", "do", "double", "dynamic_cast", "else", "enum", "explicit",
        "export", "extern", "false", "float", "for", "friend", "goto", "if", "inline",
        "int", "long", "mutable", "namespace", "new", "noexcept", "not", "not_eq",
        "nullptr", "operator", "or", "or_eq", "private", "protected", "public",
        "register", "reinterpret_cast", "requires", "return", "short", "signed",
        "sizeof", "static", "static_assert", "static_cast", "struct", "switch",
        "synchronized", "template", "this", "thread_local", "throw", "true", "try",
        "typedef", "typeid", "typename", "union", "unsigned", "using", "virtual",
        "void", "volatile", "wchar_t", "while", "xor", "xor_eq"
    };
char spec;
char op,cl;
bool isIdentifier(string str) {
    if (str.empty() || (!isalpha(str[0]) && str[0] != '_')) {
        return false;
    }
    if(str[str.size()-1]==','||str[str.size()-1]==';'){
        spec=str[str.size()-1];
        str.pop_back();
    }
    for (char c : str.substr(1)) {
        if(c=='('){
            op=c;
        }
        if(c==')'){
            cl=c;
        }
        if (!isalnum(c) && c != '_' && c != '$' && c != '(' && c != ')') {
            return false;
        }
    }
    return true;
}

bool isKeyword(const string &str) {
    return find(keywords.begin(), keywords.end(), str) != keywords.end();
}

int main() {
    ifstream take("input.txt");
    ofstream give("output.txt");

    if (!take.is_open() || !give.is_open()) {
        cout << "File not found" << endl;
        return 0;
    } else {
        string str;
        while (getline(take, str)) {
            istringstream iss(str);
            string word;
            bool first = true;
            while (iss >> word) {
                if (isKeyword(word)) {
                    if (!first) give << " ";
                    give << word;
                    first = false;
                } else if (isIdentifier(word)) {
                    if (!first) give << " ";
                    first = false;
                } else {
                    if (!first) give << " ";
                    give << word;
                    first = false;
                }
                if(spec==','||spec==';'){
                    give<<spec;
                    spec=' ';
                }
                if(op=='(') {
                    give << op;
                    op=' ';
                }
                if(cl==')') {
                    give << cl;
                    cl=' ';
                }
            }
            give << endl;
        }
    }
    return 0;
}
