vector<int> Solution::plusOne(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(A.size()==1) {
        if(A[0]<9) {
            A[0]=A[0]+1;
            return A;
        }else {
            A[0]=0;
            vector<int>::iterator i=A.begin();
            A.insert(i, 1);
            return A;
        }
    }
    for(vector<int>::iterator i=A.begin();i!=A.end();) {
        if(*i==0) {
            A.erase(i);  
        }
        else break;
    }
    // for(vector<int>::iterator i=A.begin();i!=A.end();i++) {
    //     cout<<*i<<" ";
    // }
    // cout<<"\n";
    if(A[A.size()-1]<9) {
        A[A.size()-1]=A[A.size()-1]+1;
        return A;
    }
    A[A.size()-1]=0;
    for(int i=A.size()-2;i>=0;i--) {
        if(i==0 && A[i]==9) {
            A[i]=0;
            vector<int>::iterator i= A.begin();
            A.insert(i, 1);
            break;
        }
        if(A[i]<9) {
            A[i]=A[i]+1;
            break;
        }else {
            A[i]=0;
        }
    }
    return A;
}

