/**
 * @input A : Integer
 * 
 * @Output Integer
 */
 #include <limits.h>
 
int reverse(int A) {
    int ans = 0;
    int mul = 1;
    if (A < 0){
        A = abs(A);
        mul = -1;
    }
    while(A) {
        int n = A % 10;
        if (ans > (INT_MAX - n) / 10)
        return 0;
        ans = (ans*10) +n;
        A = A/10;
    }
    return ans*mul;
}
