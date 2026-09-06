#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int n, m;
string words[100000];
string queries[100000];

unordered_map<string,int> count_map;

int main() {
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        cin >> words[i];
        count_map[words[i]]=i;
    }

    for (int i = 0; i < m; i++) {
        cin >> queries[i];

        if(isdigit(queries[i][0])){
            int num=stoi(queries[i]);
            cout << words[num] << "\n";
        }else{
            cout << count_map[queries[i]] << "\n";
        }
    }

    // Please write your code here.

    return 0;
}
