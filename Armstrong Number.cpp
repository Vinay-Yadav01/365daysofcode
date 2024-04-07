int Solution::solve(int A) {
    string temp = to_string(A);
    int po = temp.size();
    int temp1 = 0, temp2=A;
    while(temp2){
        temp1 = temp1 + pow(temp2%10,po);
        temp2/=10;
    }
    return temp1==A;
}
