#include <iostream>
#include <vector>
#include <queue>
#include <sstream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* buildTree(const vector<int>& nodes) {
    if (nodes.empty() || nodes[0] == -1) return nullptr;
    TreeNode* root = new TreeNode(nodes[0]);
    queue<TreeNode*> q;
    q.push(root);
    int i = 1;
    while (!q.empty() && i < nodes.size()) {
        TreeNode* node = q.front();
        q.pop();
        if (nodes[i] != -1) {
            node->left = new TreeNode(nodes[i]);
            q.push(node->left);
        }
        i++;
        if (i < nodes.size() && nodes[i] != -1) {
            node->right = new TreeNode(nodes[i]);
            q.push(node->right);
        }
        i++;
    }
    return root;
}

void dfs(TreeNode* node, int currentSum, int targetSum, vector<int>& path, vector<vector<int>>& result) {
    if (!node) return;
    currentSum += node->val;
    path.push_back(node->val);
    if (!node->left && !node->right && currentSum == targetSum) {
        result.push_back(path);
    } else {
        dfs(node->left, currentSum, targetSum, path, result);
        dfs(node->right, currentSum, targetSum, path, result);
    }
    path.pop_back();
}

vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
    vector<vector<int>> result;
    vector<int> path;
    dfs(root, 0, targetSum, path, result);
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, targetSum;
        cin >> n >> targetSum;
        vector<int> nodes(n);
        for (int i = 0; i < n; ++i) {
            string value;
            cin >> value;
            if (value == "null") {
                nodes[i] = -1;
            } else {
                nodes[i] = stoi(value);
            }
        }
        TreeNode* root = buildTree(nodes);
        vector<vector<int>> paths = pathSum(root, targetSum);
        if (paths.empty()) {
            cout << 0 << endl;
        } else {
            for (const auto& path : paths) {
                cout << "[";
                for (size_t i = 0; i < path.size(); ++i) {
                    cout << path[i];
                    if (i < path.size() - 1) cout << ",";
                }
                cout << "]";
            }
            cout << endl;
        }
    }
    return 0;
}
