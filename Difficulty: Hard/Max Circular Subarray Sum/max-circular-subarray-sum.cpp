class Solution {
public:
    int maxCircularSum(vector<int>& arr) {
        int n = arr.size();
        long long prefix = 0;
        long long ans = LLONG_MIN;

        deque<pair<long long, int>> mindq;
        deque<pair<long long, int>> maxdq;

        mindq.push_back({0, -1});
        maxdq.push_back({0, -1});

        for (int i = 0; i < 2 * n; i++) {
            prefix += arr[i % n];

            while (!mindq.empty() && mindq.front().second < i - n)
                mindq.pop_front();

            while (!maxdq.empty() && maxdq.front().second < i - n)
                maxdq.pop_front();

            if (!mindq.empty()) {
                ans = max(ans, prefix - mindq.front().first);
            }


            while (!mindq.empty() && mindq.back().first >= prefix)
                mindq.pop_back();
            mindq.push_back({prefix, i});

            while (!maxdq.empty() && maxdq.back().first <= prefix)
                maxdq.pop_back();
            maxdq.push_back({prefix, i});
        }

        return ans;
    }
};
