class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n=nums.size();
        int res;
        for(int i=1;i<n;i++){
            int found=0;
            int value = k*i;
            for(int j=0;j<n;j++){
                if(nums[j]==value){
                    found=1;

                }               
            }
            if(!found){
                res = value;
                return k*i;

            }
        }
        return res;
        
    }
};