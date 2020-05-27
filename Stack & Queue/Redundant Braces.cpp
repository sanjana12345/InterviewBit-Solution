int Solution::braces(string str) {
    int n=str.length();
    stack<char> st;
     for (auto& ch : str) {
        if (ch == ')') {
            char top = st.top();
            st.pop();
             bool flag = true;
            while (top != '(') {
                if (top == '+' || top == '-' || 
                    top == '*' || top == '/')
                    flag = false;
                 top = st.top();
                st.pop();
            }
             if (flag == true)
                return true;
        }
 
        else
            st.push(ch); 
    }
    return false;
}






