int Solution::solve(string A) {
    if(A.length()<8 || A.length()>15) return 0;
    int numCount=0,lowerCount=0,upperCount=0,specialCount=0;
    for(auto i:A){
        if(i>=65 && i<=90) upperCount++;
        else if (i>=97 && i<=122) lowerCount++;
        else if (i>=48 && i<=57) numCount++;
        else specialCount++;
    }
    if(upperCount && lowerCount && numCount && specialCount) return 1;
    return 0;
}
