class Solution {
public:
    void rev(vector<int>& nums, int i, int j){
        while(i<=j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        // k ki value can be > nums.size(), so take modulo
        // as after nums.size() rotations, array is same
        int n = nums.size();
        k = k % nums.size();
        // Note - in built reverse function have complex indexings to understand 
        rev(nums,0,n-1-k);
        rev(nums,n-k,n-1);
        rev(nums,0,n-1);
    }
};
