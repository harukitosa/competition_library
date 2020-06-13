#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;
const int MOD = 1000000007;
const ll INF = 1LL << 60;

// Mは使用する数字の数
const int M = 2;
// Nは出力する桁数
const int N = 10;

// bits全探索を再帰関数で実装している
// 0000000000
// 0000000001
// 0000000010
vector<vector<int>> bit;

void dfs(vector<int> &A) {
    // 終端条件
    if (A.size() == N) {
        bit.push_back(A);
        return;
    }

    for (int v = 0; v < M; ++v) {
        A.push_back(v);
        dfs(A);
        A.pop_back();
    }
}

int main() {
    vector<int> A;
    dfs(A);
    for(int i = 0;i < bit.size();i++) {
        for(int j = 0;j < N;j++) {
            cout << bit[i][j];
        }
        cout << endl;
    }
}

