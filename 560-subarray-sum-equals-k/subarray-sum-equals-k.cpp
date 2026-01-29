class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>table;
        table[0]=1;
        int prefixsum=0;
        int count=0;
        for(int num:nums){
            prefixsum+=num;
            if(table.count(prefixsum-k)){
                count+=table[prefixsum-k];
            }
            table[prefixsum]++;
        }
        return count;
    }
};