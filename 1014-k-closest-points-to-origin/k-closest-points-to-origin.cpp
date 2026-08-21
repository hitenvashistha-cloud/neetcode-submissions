class Solution {
public:
int dist(vector<int>& point){
    int distance= (point[0] * point[0]) + (point[1] * point[1]);
    return distance;
}
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n = points.size();

        struct cmp{
            bool operator()(pair<int,vector<int>>&a,pair<int,vector<int>>&b){
                if(a.first != b.first){
                    return a.first < b.first;
                }
                return a.second  < b.second;
            }
        };
        priority_queue<pair<int,vector<int>>,vector<pair<int,vector<int>>>,cmp> pq;
        for(int i = 0 ; i < n; i++){
            pair<int,vector<int>>curr = {dist(points[i]),points[i]};

            if(pq.size() < k){
                pq.push(curr);
            }
            else{
                pq.push(curr);
                pq.pop();
            }
        }
        vector<vector<int>> res;
        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }
     return res;
    }
};