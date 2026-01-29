class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>table;
     priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minheap;
    for(int &x:nums){table[x]++;}
    for(auto &y:table){
        minheap.push({y.second,y.first});
        if(minheap.size()>k){
            minheap.pop();
        }
    }
    vector<int>ans;
    while(!minheap.empty()){
        ans.push_back(minheap.top().second);
        minheap.pop();
    }
    return ans;
    }
};