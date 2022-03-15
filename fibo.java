package BASICS;
import java.util.*;
class fibo{
    public static void main(String[] args){
        //Scanner sc = new Scanner(System.in);
        int start=10,end=115,rev=0 ,n=0;
        //s = nextInt();
        //e = nextInt();
        for(int i=start;i<=end;i++){
            n=i;
            
            while(n!=0){
                int rem = n%10;
                n = n/10;
                rev = rev*10 + rem;
                //n = n/10;
            }
            if(i==rev){
                System.out.println(rev +" ");
            }
        }
       // sc.close();
    }
}
