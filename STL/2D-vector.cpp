#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your main logic goes here
    vector<vector<int>>arr(5,vector<int>(4,-1));

    int rowSize=arr.size();
    int colsize=arr[0].size();

    // 2d array with different col size

    vector<vector<int>>arr2(4);

    arr2.push_back(vector<int>(3,9));
    arr2.push_back(vector<int>(6,-1));
    arr2.push_back(vector<int>(2,0));

    return 0;
}