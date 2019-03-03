import java.util.Scanner;

public class main {
    public static void main(String []args){
        Scanner sc=new Scanner(System.in);
//        System.out.println("Enter string");
        int a1=sc.nextInt();
        int a2=sc.nextInt();
        int a3=sc.nextInt();
        int a4=sc.nextInt();
        int arr[]=new int[4];
        arr[0]=a1;arr[1]=a2;arr[2]=a3;arr[3]=a4;int calories=0;
        String str=sc.next();
        for(int i=0;i<str.length();i++){
            int quadrant=Integer.parseInt(String.valueOf(str.charAt(i)));
            calories+=arr[quadrant-1];
        }
        System.out.println(calories);
    }
}
