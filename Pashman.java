import java.util.Scanner;

public class main {
    public static void main(String []args){
        Scanner sc=new Scanner(System.in);
        // System.out.println("Enter the co-ordinates");
        int x1=sc.nextInt();
        int y1=sc.nextInt();
        int x2=sc.nextInt();
        int y2=sc.nextInt();
        if(x1!=x2&& y1!=y2){
            if(Math.abs(x1-x2)!=Math.abs(y1-y2)){
                System.out.println("-1");
            }else{
                System.out.println(x1+" "+y2+" "+x2+" "+y1);
            }
        }else if(y1==y2){
            int dist1=Math.abs(x1-x2);
            System.out.println(x1+" "+(y1-dist1)+" "+x2+" "+(y2-dist1));
        }else if(x1==x2){
            int dist1=Math.abs(y1-y2);
            System.out.println((x1+dist1)+" "+(y1)+" "+(x2+dist1)+" "+(y2));
        }else{
            System.out.println("-1");
        }
    }
}
