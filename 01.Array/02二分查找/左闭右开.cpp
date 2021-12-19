
    class Solution{
    public:
        int search(verctor<int>& nums, int target) { 
            int left = 0;
            int right = nums.size() - 1;
            while(left<right){
                int middle = left + ((right - left) >> 1);
                if(nums[middle]>target){
                    right = middle;
                }else if(nums[middle]<target){
                    left = middle + 1;
                }else{
                    return middle;
                }
            }
            return -1;
        }
    };
