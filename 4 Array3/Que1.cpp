class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> c;
        // sorted both arrays
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        // for all nums1 element checking if any nums2 element is equal
        for(int i=0; i<nums1.size(); i++){
            for(int j=0; j<nums2.size(); j++){
                // if found equal -> push_back directly if c ka size = 0
                // or check push_back se phale ki c ka phala element abhi push_back wale se same toh nhi
                if(nums1[i]==nums2[j]){
                    if(c.size()==0 || c[c.size()-1]!=nums1[i]) c.push_back(nums1[i]);
                }
            }
        }
        return c;

    }
};