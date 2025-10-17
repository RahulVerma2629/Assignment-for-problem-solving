class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        // nested loop -> i.e. 1 for loop mai 2 sub-for loops
        for(int i=0; i<n; i++){
            int leftSum = 0;
            int RightSum = 0;
            // 2-for loops for leftSum and RightSum
            for(int a=0; a<i; a++){
                leftSum += nums[a];
            }
            for(int b=i+1; b<n; b++){
                RightSum += nums[b];
            }
            if(leftSum==RightSum) return i;
        }
        return -1;
    }
};