vector<int> Solution::getRow(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> p;
    vector<vector<int> >ans;
    // if(A==0) return ans;
    p.push_back(1);
    if(A==0) return p;
    ans.push_back(p);
    p.push_back(1);
    if(A==1) return p;
    ans.push_back(p);
    
    for(int i=1;i<A;i++) {
        vector<int> tmp;
        tmp.push_back(1);
        vector<int> s =ans[i];
        for(int j=0;j<s.size()-1;j++) {
            int sum = s[j] + s[j+1];
            tmp.push_back(sum);
        }
        tmp.push_back(1);
        ans.push_back(tmp);
    }
    return ans[A];
    
    
}

