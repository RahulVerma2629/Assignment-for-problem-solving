class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        // variable sum initilised and adding arr[i] to sum each time in loop
        for(int i=0; i<n; i++){
            sum+=nums[i];
            // setting sum to arr[i] position
            nums[i] = sum;
        }
        return nums;
    }
};