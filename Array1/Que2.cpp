class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int mn = INT_MAX, mx = INT_MIN;
        int mindx = 0, maxdx = 0;
        for(int i=0; i<n; i++){
            if(nums[i]>mx){
                mx = nums[i]; 
                maxdx = i; 
            }
            if(nums[i]<mn){
                mn = nums[i]; 
                mindx = i; 
            }
        }
        if(mindx>maxdx) swap(mindx,maxdx);
        int left = maxdx+1;       
        int right = n-mindx; 
        int both = (mindx+1)+(n-maxdx);
        return min({left, right, both});
    }
};