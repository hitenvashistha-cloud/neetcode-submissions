class Solution {
public:
    string reorganizeString(string s) {
        int n = s.size();
       unordered_map<char,int> f;
        for(int i = 0; i < n; i++){
               f[s[i]]++;
        }
       
        struct cmp{
            bool operator()(pair<int,char>&a,pair<int,char>&b){
                if(a.first != b.first){
                    return a.first < b.first;
                }
                return a.second < b.second;
            }
        };
        
        priority_queue<pair<int,char>,vector<pair<int,char>>,cmp> pq;
        for(auto it : f){
       pq.push({it.second,it.first});
    }
    string res = "";
  pair<int, char> prev = {0, '#'};
    while(!pq.empty()){

        auto curr = pq.top();
        pq.pop();
        if(curr.second == prev.second){
            if(pq.empty()){
                return "";
            }
            auto next = pq.top();
            pq.pop();
            res.push_back(next.second);
            next.first--;
            if(next.first > 0){
                pq.push(next);
            }
            pq.push(curr);
            prev  = next;
        }else{
           
            res.push_back(curr.second);

            curr.first--;
            if(curr.first > 0 ){
                pq.push(curr);
            }
            prev = curr;
        }
    }
    return res;
    }
};