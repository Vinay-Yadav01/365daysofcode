int Solution::solve(string A, int B) {
        int value;
    if (A == "Monday") 
        value = 1;
    if (A == "Tuesday") 
        value = 2;
    if (A == "Wednesday") 
        value = 3;
    if (A == "Thursday") 
        value = 4;
    if (A == "Friday") 
        value = 5;
    if (A == "Saturday") 
        value = 6;
    if (A == "Sunday") 
        value = 7;    
    int count = B/7;
    int day = B % 7;
    if((day + value -1)  >= 7)
        count++;
    return count; 
}
