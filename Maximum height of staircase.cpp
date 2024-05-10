int Solution::solve(int A) {
    int blocksUsed = 0;
    int height = 0;
    while (blocksUsed <= A) {
        height++;
        blocksUsed += height;
    }
    if (blocksUsed > A)  height--;   
    return height;
}
