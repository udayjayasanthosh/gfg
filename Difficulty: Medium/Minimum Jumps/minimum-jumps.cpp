class Solution {
  public:
    int minJumps(vector<int>& arr) {
    int n = arr.size();
    if (n <= 1) return 0;
    if (arr[0] == 0) return -1;

    vector<int> v(n, -1); 
    v[0] = 0;

    for (int i = 0; i < n; i++) {
        if (v[i] == -1) continue;

        for (int j = i + 1; j <= i + arr[i] && j < n; j++) {
            if (v[j] == -1 || v[j] > v[i] + 1) {
                v[j] = v[i] + 1;
            }
        }
    }

    return v[n - 1];
}

};
