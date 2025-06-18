#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int num;
    string str;
    cin >> str >> num;
    vector<string> suffix(str.size());
    for (int i = 0; i < str.size(); ++i) {
        suffix[i] = str.substr(i);
    }
    sort(suffix.begin(), suffix.end());
    cout << suffix[num-1] << endl;

    return 0;
}
