class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        int prefixSum = 0;
        unordered_map<int, int> m;
        m[0] = 1;

        for (int i = 0; i < n; i++) {
            prefixSum += nums[i];

            int target = prefixSum - k;

            if (m.find(target) != m.end()) {
                count += m[target];
            }

            m[prefixSum]++;
        }

        return count;
    }
};