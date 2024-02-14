int Solution::braces(string A) {
    stack<char> st;
    for(int i=0; i<A.length(); i++) {
        char ch =A[i];       
        if(ch == '(' || ch == '+' ||ch == '-' || ch == '*' || ch == '/') {
            st.push(ch);
        }
        else
        {
            //ch ya toh ')' hai or lowercase letter           
            if(ch == ')') {
                bool isRedundant = true;
                
                while(st.top() != '(') {
                    char top = st.top();
                    if(top == '+' ||top == '-' || top == '*' || top == '/') {
                        isRedundant = false;
                    }
                    st.pop();
                }               
                if(isRedundant == true)
                    return true;
                st.pop();
            }           
        } 
    }
    return false;
}
