#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int n;
string words[100000];
unordered_map<string,int> count_map;
int max_count=0;


int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> words[i];

        count_map[words[i]]++;

        if(count_map[words[i]]>max_count){
            max_count=count_map[words[i]];
        }
    }

    cout << max_count;
    // Please write your code here.

    return 0;
}
