class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prod = nums[0];
        int newProd = 1;
        for(int i=0; i<nums.size(); i++){
            newProd = 1;
            for(int j=i; j<nums.size() ;j++){
                newProd *= nums[j];
                if(newProd>prod) prod = newProd;
            }
        }
        return prod;
    }
};