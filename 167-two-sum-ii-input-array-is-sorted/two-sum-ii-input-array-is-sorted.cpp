class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int low=0;
        unordered_map<int,int>table;
        int n=numbers.size();
        for(int i=0;i<n;i++){
            table.insert({numbers[i],1});
        }
        int z=0;
        for(int i=0;i<n;i++){
            int y=target-numbers[i];
            if(table.count(y)){
                z=y;
                low=i+1;
                break;
            }
        }
        for(int i=low;i<n;i++){
            if(numbers[i]==z){
                return {low,i+1};
            }
        }
        return{-1,-1};
    }
};