void genParanthesis(int a,vector<string> &out,string temp,int left,int right){
    if(left+right==a && left==right){
        out.push_back(temp);
        return;
    }
    if(right>left)
        return;
    else if(left+right<a){
        genParanthesis(a,out,temp+'(',left+1,right);
        genParanthesis(a,out,temp+')',left,right+1);
    }
}
vector<string> Solution::generateParenthesis(int A) {
    string temp="";
    vector<string> out;
    genParanthesis(2*A,out,temp,0,0);
    return out;
}
