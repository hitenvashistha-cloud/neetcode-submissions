class Solution {
public:
struct cmp{
    bool operator()(pair<int,int>&a,pair<int,int>&b){
            return a.second < b.second; 
    }
};
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,cmp> pq;
        unordered_map<int,int> f;
        for(int i = 0  ; i < nums.size(); i++){
            f[nums[i]]++;
        }
        for(auto it : f){
            pq.push({it.first,it.second});
        }
        vector<int> res;
        for(int i = 0  ; i < k; i++){
            pair<int,int> g = pq.top();

            res.push_back(g.first);
            pq.pop();
        }
    return res;
    }
};