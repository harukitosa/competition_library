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
// ~

void dfs(vector<int> &A) {
    // 終端条件
    if (A.size() == N) {
        for (int i = 0; i < N; ++i) cout << A[i];
        cout << endl;
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
}

