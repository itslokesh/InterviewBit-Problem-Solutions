public class RedundantBraces {
    public int braces(String A) {
        Stack<Character> s=new Stack<Character>();
        int i=0,open=0;
        while(i<A.length()){
            if(A.charAt(i)!=')')
                s.add(A.charAt(i));
            else{
                int operand=0,operator=0;
                while((!s.empty()) && s.peek()!='('){
                    Character c=new Character(s.pop());
                    if(c=='+' || c=='-' || c=='*' || c=='/')
                        operator++;
                    else
                        operand++;
                }
                if(operand+operator==0)
                    return 1;
                if(s.empty() && i+1==A.length())
                    return 0;
                else if(s.empty())
                    return 1;
                s.pop();
            }
            i++;
        }
        return 0;
    }
}
