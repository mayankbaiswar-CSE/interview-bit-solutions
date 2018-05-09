vector<int> Solution::wave(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=A.size();
    vector<int>ans(n);
    sort(A.begin(), A.end());
    for(int i=1;i<n;i+=2) { 
        ans[i-1]=A[i];
    }
    for(int i=0;i<n;i+=2) {
        ans[i+1]=A[i];
    }
    if(n&1) ans[n-1]=A[n-1];
    return ans;
}

