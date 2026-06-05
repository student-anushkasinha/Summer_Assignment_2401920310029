class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int currSum = 0;

        for(int i = 0; i < k; i++) {
            currSum += nums[i];
        }

        int bestSum = currSum;

        for(int i = k; i < nums.size(); i++) {
            currSum -= nums[i - k];
            currSum += nums[i];

            if(currSum > bestSum) {
                bestSum = currSum;
            }
        }

        return 1.0 * bestSum / k;
    }
};