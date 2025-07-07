#include <iostream>
#include <vector>
using namespace std;

void ps(vector<int> &arr, vector<int> &temp, vector<vector<int>> &ans, int i) {
    if (i == arr.size()) {
        ans.push_back(temp);  // Save a copy of current subset
        return;
    }

    // Include current element
    temp.push_back(arr[i]);
    ps(arr, temp, ans, i + 1);

    // Exclude current element
    temp.pop_back();
    ps(arr, temp, ans, i + 1);
}

int main() {
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> ans;
    vector<int> temp;

    ps(arr, temp, ans, 0);

    // Optional: print all stored subsets
    for (const auto &subset : ans) {
        for (int val : subset) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
