class Solution {
public:
    bool isValid(string s) {
        if(s.size() <= 1) return false;
        stack <char> st;
        for(char ch : s){
            if(ch == '(' || ch == '{' || ch == '['){
                st.push(ch);
                continue;
            }
            if(st.empty()) return false;
            char top = st.top();
            if((ch == ')' && top == '(')||
               (ch == '}' && top == '{')||
               (ch == ']' && top == '[')
            ){
                st.pop();
            }else{
                return false;
            }
        }
        return st.empty();
    }
};