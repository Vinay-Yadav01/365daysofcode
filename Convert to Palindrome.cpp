bool checkPallindrome (string A, int i, int j ){
    while(i<=j){
        if(A[i]!= A[j])  return false;
        i++;
        j--;
    }
    return true;
}

int Solution::solve(string A) {
    bool isPal = checkPallindrome(A,0,A.size()-1);
    if(A.size()%2 == 1){
        if(isPal == true ){
            return 1;
        }
    }
    else {
        if(isPal == true){
            return 0;
        }
    }
    int i=0;
    int j= A.size()-1;
    while(i<=j){
        if(A[i]!=A[j]){
        break;
        }
        i++;
        j--;
    }
    bool check1 = checkPallindrome(A, i+1, j);
    bool check2 = checkPallindrome(A, i, j-1);
    if(check1||check2)  return 1;
    return 0;

}
