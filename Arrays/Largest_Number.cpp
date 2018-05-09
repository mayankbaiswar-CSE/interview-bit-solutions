string Solution::largestNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    auto maker =[](string k, string j) {
       string X = k.append(j);
       string Y = j.append(k);
       
       return X>Y;
    };
    string s;
    vector<string>po;
    for(int i=0;i<A.size();i++) {
        po.push_back(to_string(A[i]));
    }
    sort(po.begin(), po.end(), maker);
    for(int i=0;i<po.size();i++) {
        s.append(po[i]);
    }
    for(string::iterator i=s.begin();i!=s.end();) {
        if(*i=='0' && s.length()==1) break;
        else if(*i=='0') s.erase(i);
        else if(*i!='0') break;
    }
    return s;
}

