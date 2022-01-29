import java.util.*;
 
public class Main {
    public static void main(String[] args) {
        Scanner cin  = new Scanner(System.in);
        int t = cin.nextInt();
        while(t != 0) {
            int n = cin.nextInt();
            System.out.println((int) Math.ceil((double)n/2));
            t--;
        }
    }
}
