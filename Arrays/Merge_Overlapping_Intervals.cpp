/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::merge(vector<Interval> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=A.size();
    auto comp=[](Interval a, Interval b) {
      return a.start<b.start;  
    };
    sort(A.begin(), A.end(), comp);
    if(A.size()==1) return A;
    vector<Interval>vec;
    // for(int i=0;i<A.size();i++) {
    //     cout<<"("<<A[i].start<<", "<<A[i].end<<")";
    // }
    // cout<<"==================\n";
    Interval tmp;
    for(int i=1;i<n;i++) {
        tmp=A[i-1];
        while((max(tmp.start, A[i].start)<=min(tmp.end, A[i].end)) && i<n) {
            tmp.start=min(tmp.start, A[i].start);
            tmp.end=max(tmp.end, A[i].end);
            i++;
        }
        vec.push_back(tmp);
    }
    if(max(tmp.start, A[n-1].start)<=min(tmp.end, A[n-1].end)) {
        tmp.start=min(tmp.start, A[n-1].start);
        tmp.end=max(tmp.end, A[n-1].end);
        vec.pop_back();
        vec.push_back(tmp);
    }else {
        vec.push_back(A[n-1]);
    }
    return vec;
}

