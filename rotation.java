import java.util.HashMap;
import java.util.Scanner;

public class main {
    public static void main(String []args){
        HashMap<String,Integer>hm=new HashMap<String, Integer>();
        Scanner sc=new Scanner(System.in);
        // System.out.println("Enter string");
        String str=sc.next();
        for(int i=97;i<=122;i++){
            String letter=Character.toString((char)i);
            hm.put(letter,(i-97)+1);
        }
        int currPos=1;int mid=26/2;int rotation=0;
        for(int i=0;i<str.length();i++){
            int from=currPos;int to=0;
            if(hm.containsKey(String.valueOf(str.charAt(i)))){
                to=hm.get(String.valueOf(str.charAt(i)));
            }
            int diff=Math.abs(from-to);
            rotation+=(diff>13)?26-diff:diff;
            currPos=to;
        }
        System.out.println(rotation);
    }
}
