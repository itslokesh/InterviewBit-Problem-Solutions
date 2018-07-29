public class Flip {
    public ArrayList<Integer> flip(String A) {
        ArrayList<Integer> out=new ArrayList<Integer>();
        int firstIndex=-1,lastIndex=-1;
        int maxSoFar=0;
        int maxEndingHere=0;
        int left=0;
        for(int i=0;i<A.length();i++){
            if(A.charAt(i)=='1')
                maxEndingHere=maxEndingHere-1;
            else{
                maxEndingHere=maxEndingHere+1;
            }
            if(0>maxEndingHere){
                left=i+1;
                maxEndingHere=0;
            }
            if(maxSoFar<maxEndingHere){
                maxSoFar=maxEndingHere;
                firstIndex=left;
                lastIndex=i;
            }
        }
        
        if(lastIndex==-1){
          //  out.add(new Integer(-1));
            return out;
        }
        out.add(new Integer(firstIndex)+1);
        out.add(new Integer(lastIndex)+1);
        return out;
    }
}
