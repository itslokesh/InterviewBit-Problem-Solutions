public class CountAndSay {
    public String countAndSay(int A) {
        String first=new String("1");
        if(A==1)
            return first;
        first="11";
        if(A==2)
            return first;
        for(int i=2;i<A;i++){
            int j=0,len=first.length();
            String second=new String("");
            while(j<len){
                int count=1;
                while(j<len-1 && first.charAt(j)==first.charAt(j+1)){
                    count++;
                    j++;
                }
           //     System.out.println(count);
                second=second.concat(Integer.toString(count));
                second=second.concat(String.valueOf(first.charAt(j)));
            j++;
        }
        first=second;
      //  System.out.println(first);
    }
    return first;
    }
}
