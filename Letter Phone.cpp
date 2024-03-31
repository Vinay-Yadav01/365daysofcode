void f(string A,int index,string result,vector<string> &ans,vector<string> v){
    if(index==A.size()) {
        ans.push_back(result);
        return;
    }
    for(int j=0;j<v[A[index]-'0'].size();j++){
        f(A,index+1,result+v[A[index]-'0'][j],ans,v);
    }
}

vector<string> Solution::letterCombinations(string A) {
    vector<string> v={"0","1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> ans;
    f(A,0,"",ans,v);
    return ans;
}
