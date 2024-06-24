#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <set>
using namespace std;

unordered_set<char> terminals;
unordered_set<char> non_terminals;
unordered_map<char, vector<string>> productions_dict;
char starting_symbol;

unordered_set<char> first(const string& str);
unordered_set<char> follow(char nT);

unordered_set<char> first(const string& str) {
    unordered_set<char> first_;
    if (non_terminals.find(str[0]) != non_terminals.end()) {
        const vector<string>& alternatives = productions_dict[str[0]];
        for (const string& alternative : alternatives) {
            unordered_set<char> first_2 = first(alternative);
            first_.insert(first_2.begin(), first_2.end());
        }
    } else if (terminals.find(str[0]) != terminals.end()) {
        first_.insert(str[0]);
    } else if (str.empty() || str == "@") {
        first_.insert('@');
    } else {
        unordered_set<char> first_2 = first(string(1, str[0]));
        if (first_2.find('@') != first_2.end()) {
            int i = 1;
            while (first_2.find('@') != first_2.end()) {
                first_.insert(first_2.begin(), first_2.end());
                first_.erase('@');
                if (i >= str.size()) {
                    first_.insert('@');
                    break;
                }
                first_2 = first(str.substr(i, 1));
                first_.insert(first_2.begin(), first_2.end());
                first_.erase('@');
                i++;
            }
        } else {
            first_.insert(first_2.begin(), first_2.end());
        }
    }
    return first_;
}

unordered_set<char> follow(char nT) {
    unordered_set<char> follow_;
    if (nT == starting_symbol) {
        follow_.insert('$');
    }
    for (const auto& prod : productions_dict) {
        char nt = prod.first;
        const vector<string>& rhs = prod.second;
        for (const string& alt : rhs) {
            size_t pos = alt.find(nT);
            if (pos != string::npos) {
                string following_str = alt.substr(pos + 1);
                if (following_str.empty()) {
                    if (nt != nT) {
                        unordered_set<char> follow_nt = follow(nt);
                        follow_.insert(follow_nt.begin(), follow_nt.end());
                    }
                } else {
                    unordered_set<char> follow_2 = first(following_str);
                    if (follow_2.find('@') != follow_2.end()) {
                        follow_.insert(follow_2.begin(), follow_2.end());
                        follow_.erase('@');
                        if (nt != nT) {
                            unordered_set<char> follow_nt = follow(nt);
                            follow_.insert(follow_nt.begin(), follow_nt.end());
                        }
                    } else {
                        follow_.insert(follow_2.begin(), follow_2.end());
                    }
                }
            }
        }
    }
    return follow_;
}

int main() {
    int no_of_productions;
    cout << "Enter the number of productions: ";
    cin >> no_of_productions;
    cin.ignore();
    bool flag = false;
    cout << "Enter the productions (in the form A->α, where A is a non-terminal and α is a string of terminals and/or non-terminals):" << endl;
    for (int i = 0; i < no_of_productions; ++i) {
        string production;
        getline(cin, production);
        if(!flag) {
            starting_symbol = production[0];
            flag = true;
        }
        size_t pos = production.find("->");
        char nonterm_to_prod = production[0];
        string alternatives_str = production.substr(pos + 2);
        stringstream ss(alternatives_str);
        string alternative;
        while (getline(ss, alternative, '/')) {
            productions_dict[nonterm_to_prod].push_back(alternative);
        }
        non_terminals.insert(nonterm_to_prod);
        for (char c : alternatives_str) {
            if (!isupper(c) && c != '/' && c != '@') {
                terminals.insert(c);
            }
        }
    }

    unordered_map<char, unordered_set<char>> FIRST;
    unordered_map<char, unordered_set<char>> FOLLOW;

    for (const char& non_terminal : non_terminals) {
        FIRST[non_terminal] = first(string(1, non_terminal));
    }

    FOLLOW[starting_symbol].insert('$');
    for (const char& non_terminal : non_terminals) {
        unordered_set<char> follow_set = follow(non_terminal);
        FOLLOW[non_terminal].insert(follow_set.begin(), follow_set.end());
    }
    set<char> non_terminalss;
    for (const char& non_terminal : non_terminals) {
        non_terminalss.insert(non_terminal);
    }
    cout << setw(20) << "Non Terminals" << setw(20) << "First" << setw(20) << "Follow" << endl;
    for (const char& non_terminal : non_terminalss) {
        cout << setw(15) << non_terminal;
        cout << setw(20) << "{ ";
        for (const char& f : FIRST[non_terminal]) {
            cout <<"'"<< f <<"'"<< " ";
        }
        cout << "}";
        cout << setw(15) << "{ ";
        for (const char& f : FOLLOW[non_terminal]) {
            cout <<"'"<< f <<"'"<< " ";
        }
        cout << "}" << endl;
    }

    return 0;
}
