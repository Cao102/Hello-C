#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> A;
vector<vector<int>> res;
int N, K;

void findSubsets(int start, vector<int>& current, int sum) {
    if (sum == K) {
        res.push_back(current);
        return;
    }
    for (int i = start; i < N; ++i) {
        if (sum + A[i] <= K) {
            current.push_back(A[i]);
            findSubsets(i + 1, current, sum + A[i]);
            current.pop_back();
        }
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        cin >> N >> K;
        A.resize(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        sort(A.begin(), A.end());
        vector<int> current;
        res.clear();
        findSubsets(0, current, 0);
        if (res.empty()) {
            cout << "-1";
        } else {
            for (auto& subset : res) {
                cout << "[";
                for (int i = 0; i < subset.size(); ++i) {
                    cout << subset[i] << (i < subset.size() - 1 ? " " : "");
                }
                cout << "] ";
            }
        }
        cout << endl;
    }
    return 0;
}