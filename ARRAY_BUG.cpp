vector<int> Solution::rotateArray(vector<int> &A, int B) {
	vector<int> ans; 
    int n = A.size();
	for (int i = 0; i < n; i++) {
		ans.push_back(A[(i + B)%n]);
	}
	return ans; 
}
