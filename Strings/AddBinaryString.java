public class AddBinaryString {
    public String addBinary(String A, String B) {
        int aLength=A.length();
        int bLength=B.length();
        if(aLength<bLength)
            return addBinary(B,A);
        while(bLength<aLength){
            B="0"+B;
            bLength++;
        }
        String out=new String("");
        int i=aLength;
        int carry=0;
        while(i>0){
            int sum=carry+ Character.getNumericValue(A.charAt(i-1))+ Character.getNumericValue(B.charAt(i-1));
            if(sum==0)
                out="0"+out;
            else if(sum==1){
                carry=0;
                out="1"+out;
            }
            else if(sum==2){
                carry=1;
                out="0"+out;
            }
            else{
                carry=1;
                out="1"+out;
            }
            i--;
        }
        if(carry==1)
            out="1"+out;
        return out;
    }
}
