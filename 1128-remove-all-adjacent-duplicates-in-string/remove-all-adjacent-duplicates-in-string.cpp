class Solution {
public:
    string removeDuplicates(string s) {
        if(s.size() <= 1) return s;
        stack <char> st;
        string res = "";
        for(int i = 0; i < s.size(); i++){
            if(!st.empty() && st.top() == s[i]){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
    while (!st.empty()) {
    res += st.top();
    st.pop();
}

reverse(res.begin(), res.end());
return res;
    }
};