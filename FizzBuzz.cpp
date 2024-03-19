vector<string> Solution::fizzBuzz(int A) {
    vector<string> ans;
    int i=1;
    while(i<=A){
        if(i%3==0 && i%5==0) ans.push_back("FizzBuzz");
        else if(i%3==0) ans.push_back("Fizz");
        else if(i%5==0) ans.push_back("Buzz");
        else ans.push_back(to_string(i));
        i++;
    }
    return ans;
}

