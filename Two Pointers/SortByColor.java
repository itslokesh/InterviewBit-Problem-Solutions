public class SortByColor {
    public void sortColors(ArrayList<Integer> a) {
        int count[]=new int[3];
        for(int i=0;i<3;i++)
            count[i]=0;
        for(int i=0;i<a.size();i++)
            count[a.get(i)]++;
        for(int i=0;i<count[0];i++)
            a.set(i,0);
        for(int i=0;i<count[1];i++)
            a.set(i+count[0],1);
        for(int i=0;i<count[2];i++)
            a.set(i+count[0]+count[1],2);
      // return a;
    }
}
