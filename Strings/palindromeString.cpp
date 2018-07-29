int Solution::isPalindrome(string A) {
    int low=0,high=A.length()-1;
    while(low<high){
        int lower=0,upper=0;
        int left=-1,right=-1;
        if(A[low]-'a'>=0 && A[low]-'a'<26){
            lower++;
            left=A[low]-'a';
        }
        if(A[high]-'a'>=0 && A[high]-'a'<26){
            lower++;
            right=A[high]-'a';
        }
        if(A[low]-'A'>=0 && A[low]-'A'<26){
            upper++;
            left=A[low]-'A';
        }
        if(A[high]-'A'>=0 && A[high]-'A'<26){
            upper++;
            right=A[high]-'A';
        }
        if(A[high]-'0'>=0 && A[high]-'0'<10){
            upper++;
            right=A[high]-'0';
        }
        if(A[low]-'0'>=0 && A[low]-'0'<10){
            lower++;
            left=A[low]-'0';
        }
        if((left==-1) || (right==-1)){
//                        cout<<low<<" "<<high<<endl;

            if(left==-1)
                low++;
            if(right==-1)
                high--;
        }
        else if(left!=right){
 //                       cout<<low<<" "<<high<<endl;
//
            return 0;
        }
        else{
 //                       cout<<low<<" "<<high<<endl;

            low++;
            high--;
        }
      //  cout<<high<<endl;
    }
    return 1;
}
