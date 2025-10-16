class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i<n-1; i++){
            int same = 0;
            for(int j=i+1; j<n; j++){
                if(nums[i] != nums[j]) break;
                else if(nums[i] == nums[j]){
                    same ++;
                    continue;
                }
            }
            for(int k=i+1; k<n-same; k++){
                nums[k] = nums[k+same];
            }
            n -= same;
        }
        return n;  
    }
};