import java.util.Scanner;
public class TestDemo {

public static void main(String[] args) {
	//求 5 的阶乘的和
	int a = 5;
	//5! + 4! +++
	int sum = 0;
	int temp = 0;
	while (a>0) {
		temp = 0;
		int i = a;
		// int j = 0;
		while(i>1){
		temp = i;
		i--;
        temp*=i;		
		}
		sum+=temp;
		a--;
		
		
	}
	
	
	
	
	// Scanner scan = new Scanner(System.in);
	// int a = scan.nextInt();
	// int temp = a;

	// while(a > 1) {
		// a--;
		// temp *= a;
	// }
	// System.out.println(temp);
    // int a = 10;
	//没有short 类型
	//可以做switch的参数  int  byte  char   枚举
	
	//不能做long double float boolean 
	
	
	// switch() {
		// case 1:
		// System.out.println(a);
			// break;
		// case 2:
		// System.out.println(a);
			// break;
		// case 3:
		// System.out.println(a);
			// break;
		// case 4:
		// System.out.println(a);
			// break;
		// case 5:
		// System.out.println(a);
			// break;
		// case 6:
		// System.out.println(a);
			// break;
		// default:
			// System.out.println("请输入正确的数字");
		    // break;
	// }
	//退出程序
	//Ctrl + D  正常退出
	//Ctrl + C  直接退出（强制） 
	// Scanner  scan = new Scanner(System.in);
	// while(scan.hasNext())
	// {
	// int year = scan.nextInt();
	// if((year%4==0&&year%100!=0)||(year%400==0)) {
		// System.out.println("是闰年");
	// }
	// else {
		// System.out.println("不是闰年!");
	// }
	// }
	
	// int a = 10;
	// int b = 20;
	// if(a==10)
		// if(b==20)
		// System.out.println("aaa");
	    // else 
	    //else与最近的if结合
        // System.out.println("bbb");
	
	// int a = 10;
	// if(a == 10) {
	// System.out.println(a);
	// System.out.println("hehehe");
}



 public static void main_1(String[] args) {
	 
 }
}
// public static void main_1(String[] args) {
	// Scanner scan = new Scanner(System.in);
	// 注意nextInt与 nextLine不放在一起
	// int a = scan.nextInt();
	// System.out.println(a);
	// next 和nextLine 的区别
	// next 遇到空格会结束掉
	
	// String str = scan.nextLine();
	// System.out.println(str);

// }
// }
