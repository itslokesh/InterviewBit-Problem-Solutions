public class AToI {
    // DO NOT MODIFY THE LIST. IT IS READ ONLY
    public int atoi(final String A) {
        long out=0,neg=1;
        for(int i=0;i<A.length();i++){
            if(Character.getNumericValue(A.charAt(i))>=0 && Character.getNumericValue(A.charAt(i))<10)
                out=out*10+Character.getNumericValue(A.charAt(i));
            else if(A.charAt(i)=='-')
                neg=-1;
            else if(A.charAt(i)=='+'){}
            if(out*neg>Integer.MAX_VALUE)
                return Integer.MAX_VALUE;
            else if(out*neg<Integer.MIN_VALUE)
                return Integer.MIN_VALUE;
            else
                break;
        }
        out*=neg;
        return (int)out;
    }
}
