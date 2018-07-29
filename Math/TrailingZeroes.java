public class TrailingZeroes {
    public int trailingZeroes(int A) {
        int i=5;
        int out=0;
        while(A/i>0){
            out=out+A/i;
            i=i*5;
        }
        return out;
    }
}
