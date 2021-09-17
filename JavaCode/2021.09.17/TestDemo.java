import java.util.Scanner;
public class TestDemo {
	public static void main(String[] args) {

	Scanner scan = new Scanner (System.in);
	
	int num = scan.nextInt(); 
	num++;
	System.out.println(num);
	
	++num;
	System.out.println(num);
	
	}		

	// public static void main1(String[] args) { 
     // Scanner scan = new Scanner(System.in);
	 
	 // int num = scan.nextInt();
	 
	 // break 不能用于if语句中
	 // if(a==10) {
		 
	 // break;
	 // }
	 // while(num<=20) {
     	 // if(num%15==0) {
		 // System.out.println(num);
		 // break;
		 // continue;
		 // 结束本趟循环
		 // }
		 // System.out.println("hahaha");
		 // num++;
	 // }

	// }
}