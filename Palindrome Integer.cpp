int Solution::isPalindrome(int A) {
  if(A<0)  return 0;
  int rev=0;
  int temp=A;
  while(temp){
    int rem = A%10;
    rev = rev*10+rem;
    temp/=10;
  }
  if(A==rev)  return 1;
  else return 0;
}
