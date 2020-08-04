
import java.util.Scanner;
public class Main
{
    public void solve(int n,String source,String aux,String dest){
        if(n==1){
            System.out.println(source+"->"+dest);
            return;
        }
        solve(n-1,source,dest,aux);
        System.out.println(source+"->"+dest);
        solve(n-1,aux,source,dest);
    }
	public static void main(String[] args) {
	    Main o=new Main();
	    System.out.println("Enter number of disks : ");
	    
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
		scanner.close();
		o.solve(n,"A","B","C");
		
	}
}
