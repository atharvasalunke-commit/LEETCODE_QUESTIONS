class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int>table;
        int n=numbers.size();
        for(int i=0;i<n;i++){
            table.insert({numbers[i],1});
        }
        int z=0;
        int j=0;
        for(int i=0;i<n;i++){
            int y=target-numbers[i];
            if(table.count(y)){
                z=y;
                j=i;
            }
        }
        for(int i=0;i<n;i++){
            if(z==numbers[i]){
                return {i+1,j+1};
            }
        }
        return{-1,-1};
    }
};