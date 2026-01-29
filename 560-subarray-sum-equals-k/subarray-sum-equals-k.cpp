class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int temp=0;
        int count=0;
        for(int i=0;i<n;i++){
            temp=nums[i];
            if(temp==k){
                count++;
            }
            for(int j=i+1;j<n;j++){
                temp+=nums[j];
                if(temp==k){
                    count++;
                }
            }   
        }
        return count;
    }
};