    vector<Interval> ans;
    int n = intervals.size();
    int i = 0;
    
    // Add all intervals that end before the newInterval starts
    while (i < n && intervals[i].end < newInterval.start) {
        ans.push_back(intervals[i]);
        i++;
    }
    
    // Merge intervals that overlap with newInterval
    while (i < n && intervals[i].start <= newInterval.end) {
        newInterval.start = min(newInterval.start, intervals[i].start);
        newInterval.end = max(newInterval.end, intervals[i].end);
        i++;
    }
    
    ans.push_back(newInterval); // Add the merged newInterval
    
    // Add remaining intervals
    while (i < n) {
        ans.push_back(intervals[i]);
        i++;
    }
    
    return ans;
