int Solution::solve(vector<int> &A, int B) {
    unordered_map<int, int> frequency;
    // Count the frequency of each element in A
    for (int num : A) {
        frequency[num]++;
    }
    
    // If the number of distinct elements is already <= B, return 0
    if (frequency.size() <= B) {
        return 0;
    }
    
    // Extract frequencies and sort them in descending order
    vector<int> freqList;
    for (auto& entry : frequency) {
        freqList.push_back(entry.second);
    }
    sort(freqList.begin(), freqList.end(), greater<int>());
    
    // Calculate the minimum operations needed
    int operations = 0;
    int distinctCount = freqList.size();
    
    for (int i = freqList.size() - 1; i >= 0 && distinctCount > B; i--) {
        operations += freqList[i];
        distinctCount--;
    }
    
    return operations;
}
