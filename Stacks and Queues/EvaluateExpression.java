public class EvaluateExpression {
    public int evalRPN(ArrayList<String> A) {
        Stack<String> expression=new Stack<String>();
        StringBuilder sb= new StringBuilder();
        int i=0;
        while(i<A.size()){
            if(!(A.get(i).equals("+") || A.get(i).equals("-") || A.get(i).equals("*") || A.get(i).equals("/"))){
                expression.add(A.get(i)); 
            }
            else{
                Integer right=new Integer(Integer.parseInt(expression.pop()));
                Integer left=new Integer(Integer.parseInt(expression.pop()));
                Integer evaluated=new Integer(0);
                if(A.get(i).equals("+"))
                    evaluated=left+right;
                else if(A.get(i).equals("-"))
                    evaluated=left-right;
                else if(A.get(i).equals("*"))
                    evaluated=left*right;
                else if(A.get(i).equals("/"))
                    evaluated=left/right;
                expression.add(evaluated.toString());
            }   
            i++;
        }
        return Integer.parseInt(expression.pop());
    }
}
