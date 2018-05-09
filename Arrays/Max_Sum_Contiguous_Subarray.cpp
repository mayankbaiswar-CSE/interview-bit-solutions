int Solution::maxSubArray(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    if(A.size()==1) {
        return A[0];
    }
    int so_far=0,last_max=INT_MIN;
    for(int i=0;i<A.size();i++) {
        so_far+=A[i];
        if(so_far>last_max) {
            last_max=so_far;
        }
        if(so_far<0) {
            so_far=0;
        }
    }
    return last_max;
}

