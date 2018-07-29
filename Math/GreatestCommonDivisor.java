public class GreatestCommonDivisor {
    public int gcd(int A, int B) {
        if(A<B)
            return gcd(B,A);
        if(A==0 || B==0)
            return A;
        int i=2,gcd=1;
        while(i<=B){
            if(A%i==0 && B%i==0){
                A=A/i;
                B=B/i;
                gcd=gcd*i;
            }
            else
                i++;
        }
        return gcd;
    }
}
