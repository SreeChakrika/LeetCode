class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int i, j;
        i = 0;
        j = 1;
        sort(nums.begin(),nums.end());
        while(j < nums.size()){
            if(nums[i] == nums[j]){
                return true;
            }
            i++;
            j++;
        }
        return false;
    }
};