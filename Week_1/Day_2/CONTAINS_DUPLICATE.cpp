class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>mpp;
        for(int num: nums){
            if(mpp.find(num) != mpp.end()){
            return true;
            }
            mpp.insert(num);
        }
        return false;
    }
};