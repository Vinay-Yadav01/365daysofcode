string Solution::solve(string A) {
    stack<string> st;
    int n=A.size();
    for(int i=0;i<n;i++){  
        if(A[i]>=97 && A[i]<=122){
            string s;
            while((A[i]>=97 && A[i]<=122) && i<n){
            s+=A[i];
            i++;
        }
        st.push(s);
        }
        else 
        continue;
        
    }
    string ans="";
    while(!st.empty()){
        ans+=st.top();
        st.pop();
        if(!st.empty()) ans+=" ";
    }
    return ans;
}
