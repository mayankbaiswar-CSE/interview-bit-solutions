vector<vector<int> > Solution::generate(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    vector<int> p;
    vector<vector<int> >ans;
    if(A==0) return ans;
    p.push_back(1);
    ans.push_back(p);
    if(A==1) return ans;
    p.push_back(1);
    ans.push_back(p);
    if(A==2) return ans;
    
    for(int i=2;i<A;i++) {
        vector<int> tmp;
        tmp.push_back(1);
        vector<int> s =ans[i-1];
        for(int j=0;j<s.size()-1;j++) {
            int sum = s[j] + s[j+1];
            tmp.push_back(sum);
        }
        tmp.push_back(1);
        ans.push_back(tmp);
    }
    return ans;
}

