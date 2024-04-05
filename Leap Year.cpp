int Solution::solve(int A) {
    if (A % 4 == 0) {
        if (A % 100 == 0) {
            if (A % 400 == 0)   return 1; 
            return 0; 
        }
        return 1; 
    }
    return 0; 
}
