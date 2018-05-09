/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(newInterval.start>newInterval.end) swap(newInterval.start, newInterval.end);
    if(intervals.size()==0) {
        intervals.push_back(newInterval);
        return intervals;
    }
    vector<Interval>merged;
    vector<Interval> overlapped;
    Interval theInterval;
    for(int i=0;i<intervals.size();i++) {
        if(max(intervals[i].start, newInterval.start)<=min(intervals[i].end, newInterval.end)) {
            overlapped.push_back(intervals[i]);
        }else {
            merged.push_back(intervals[i]);
        }
    }
    if(overlapped.size()!=0) {
        theInterval.start = min(overlapped[0].start, newInterval.start);
        theInterval.end = max(overlapped[overlapped.size()-1].end, newInterval.end);
        merged.push_back(theInterval);
    }else {
        merged.push_back(newInterval);
    }
    auto sorter = [](Interval a, Interval b) {
        return a.start<b.start;
    };
    sort(merged.begin(), merged.end(), sorter);
    return merged;
}

