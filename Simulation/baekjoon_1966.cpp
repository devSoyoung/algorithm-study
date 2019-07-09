#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T = 0;
    cin >> T;
    for (int i = 1; i <= T; i++) {
        int n, targetIdx;
        cin >> n >> targetIdx;

        vector<int> v;
        vector<int>::iterator iter;
        for (int j = 0; j < n; j++) {
            int importance;
            cin >> importance;

            // insert new item to first position
            v.insert(v.begin(), importance);
        }

        int counter = 1;
        while(!v.empty()) {
            // calculate current max
            int currentMax = 0;
            for (iter = v.begin(); iter != v.end(); ++iter) {
                if (*iter > currentMax) {
                    currentMax = *iter;
                }
            }

            // current document cannot print
            if (v.back() < currentMax) {
                v.insert(v.begin(), v.back());
                v.pop_back();
                if (targetIdx == 0) {
                    targetIdx = v.size() - 1;
                } else {
                    targetIdx--;
                }
            } else {    // current document can print
                if (targetIdx == 0) {
                    // current document = target
                    break;
                } else {
                    // current document != target
                    counter++;
                    v.pop_back();
                    targetIdx--;
                }
            }
        }

        cout << counter << endl;
    }
    return 0;
}
