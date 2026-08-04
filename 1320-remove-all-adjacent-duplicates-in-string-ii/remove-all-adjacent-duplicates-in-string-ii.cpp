class Solution {
public:
    string removeDuplicates(string s, int k) {
        int n = s.size();
        if(n < k) return s;
        stack <pair<char,int>> st;
        for(char ch : s){
            if(st.empty()){
                st.push({ch,1});
                continue;
            }
            if(st.top().first != ch){
                st.push({ch,1});
                continue;
            }
            if(st.top().second < k-1  ){
                pair<char,int> p = st.top();
                st.pop();
                st.push({p.first,p.second +1});
                continue;
            }
            st.pop();
        } 
string res = "";
while(!st.empty()){
    pair<char,int> t = st.top();
    st.pop();
    while(t.second--){
        res.push_back(t.first);
    }
}
reverse(res.begin(), res.end());
return res;
    }
};