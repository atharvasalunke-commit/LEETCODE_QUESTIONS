class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxjump=0;
        int n=nums.size();
        int j=n-1;
        for(int i=0;i<n;i++){
            if(i>maxjump){
                return false;
            }
            maxjump=std::max(maxjump,i+nums[i]);
            if(maxjump>=j){
                return true;
            }
        }
        return false;
    }
};