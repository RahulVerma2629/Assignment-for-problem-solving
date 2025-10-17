class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int mn = INT_MAX, mx = INT_MIN;
        int minI = 0, maxI = 0;
        for(int i=0; i<n; i++){
            if(nums[i]<mn){
                mn = nums[i];
                minI = i;
            }
        }
        for(int j=0; j<n; j++){
            if(nums[j]>mx){
                mx = nums[j];
                maxI = j;
            }
        }
        int count1 = 0, count2 = 0, count3 = 0;
        // left se count
        for(int i=0; i<=max(minI,maxI); i++){
            count1++;
        }
        // right se count
        for(int i=n-1; i>=min(minI,maxI); i--){
            count2++;
        }
        // dono taraf se count
        for(int i=0; i<=min(minI,maxI); i++){
            count3++;
        }
        for(int j=n-1; j>=max(minI,maxI); j--){
            count3++;
        }
        if(count1<=count2 && count1<=count3) return count1;
        else if(count2<=count1 && count2<=count3) return count2;
        return count3;
    }
};