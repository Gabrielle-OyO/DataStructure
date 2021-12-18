// 时间复杂度：$O(n^2)$ 
// 空间复杂度：$O(1)$

class Solution{
    public:
     int minSubArrayLen(int s, vector<int>& nums) { 
        int result = INT32_MAX;
        int sum = 0;
        int subLength = 0;
        for (int i = 0; i < nums.size();i++) {
            sum = 0;
            for (int j = 0; j < nums.size(); j++) {
                sum += nums[j];
                if(sum>=s){
                    subLength = j - i + 1;
                    result = result < subLength ? result : subLength;
                    break;
                }
            }
        }
        return result == INT32_MAX ? 0 : result;
     }
};