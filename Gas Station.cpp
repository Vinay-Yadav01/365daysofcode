int Solution::canCompleteCircuit(const vector<int> &A, const vector<int> &B) {
    
    int total_tank = 0;
    int current_tank = 0;
    int starting_station = 0;

    for (int i = 0; i < A.size(); i++) {
        total_tank += A[i] - B[i];
        current_tank += A[i] - B[i];
        if (current_tank < 0) {
            starting_station = i + 1;
            current_tank = 0;
        }
    }if(total_tank<0) return -1;
    return starting_station;
}
