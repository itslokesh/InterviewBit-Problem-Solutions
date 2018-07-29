public class Solution {
    public int coverPoints(ArrayList<Integer> A, ArrayList<Integer> B) {
        int dist=0;
        for(int i=1;i<A.size();i++){
                int xdiff=Math.abs(A.get(i)-A.get(i-1));
                int ydiff=Math.abs(B.get(i)-B.get(i-1));
                int diff=Math.abs(xdiff-ydiff);
                dist=dist+diff;
                if(xdiff>ydiff){
                    dist=dist+Math.abs(B.get(i)-B.get(i-1));
                }
                else{
                    dist=dist+Math.abs(A.get(i)-A.get(i-1));
                }
        }
        return dist;
    }
}
