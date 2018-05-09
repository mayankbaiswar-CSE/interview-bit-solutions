vector<int> Solution::maxset(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int>ans, curRange;
    long long curSum=0, so_far=0;
    for(int a=0;a<A.size();a++) {
        if(A[a]>=0) {
            curRange.push_back(A[a]);
            curSum+=A[a];
            // cout<<"curSum: "<<curSum<<"\n";
            if(curSum>so_far) {
                so_far=curSum;
                ans=curRange;
            }
            else if(curSum==so_far && curRange.size()>ans.size()) {
                ans=curRange;
            }
        }else {
            curSum=0;
            curRange.clear();
        }
    }
    return ans;
}

