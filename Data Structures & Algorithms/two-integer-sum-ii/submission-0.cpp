class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0;
        int right = n-1;

        while(left < right){
            int sum = nums[left] + nums[right];
            if(sum == target){
                return {left+1, right+1};
            }else if(sum < target){
                left++;
            }else{
                right--;
            }
        }
        return {};
    }
};
