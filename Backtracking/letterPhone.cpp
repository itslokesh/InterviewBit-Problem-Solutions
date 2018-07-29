// A recursive function to print all possible words that can be obtained
// by input number[] of size n.  The output words are one by one stored
// in output[]
vector<string> hashTable;
void  printWordsUtil(string number, vector<string> &out, string temp,int index){
    if(index==number.length())
        out.push_back(temp);
    else{
        for(int j=0;j<hashTable[(int)number[index]-48].length();j++){
            temp+=hashTable[(int)(number[index]-48)][j];
            printWordsUtil(number,out,temp,index+1);
            temp.pop_back();
        }
    }
}
vector<string> Solution::letterCombinations(string A) {
    vector<string> out;
    string temp="";
    hashTable.push_back("0");
    hashTable.push_back("1");
    hashTable.push_back("abc");
    hashTable.push_back("def");
    hashTable.push_back("ghi");
    hashTable.push_back("jkl");
    hashTable.push_back("mno");
    hashTable.push_back("pqrs");
    hashTable.push_back("tuv");
    hashTable.push_back("wxyz");
    printWordsUtil(A, out,temp,0);
    return out;
}
