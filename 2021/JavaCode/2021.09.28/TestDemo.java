public class TestDemo {
	//基本数据类型
	 byte char short int long float double boolean 
	
	public static void main(String[] args) {
		
		boolean flg = true;
		boolean num = false;
		// if(1) {
			
			
		// }
		if(flg) {
			
			
		}
	}
	
	public static void main3(String[] args) {
		float a = 3.14f;   //四个字节
		double b = 3.14;   //八个字节
		//一般情况，如果写项目遇到小数，建议使用double
	    byte c = 127;
		System.out.println(c);
	    System.out.println(c + 1);
		System.out.println(c + 2);
		System.out.println(c - 1);
		
		byte d = 128 - 1;
		System.out.println(d);
		
		char ch = 'a';   //两个字节   0 - 65535 没有负数
		char ch1 = '高'; //一个汉字占两个字节
		char ch3 = 97;
		char ch4 = 1;
		
	}
	
	public static void main2(String[] args) {
		int x = 1;
		int y = 2;
		System.out.println(x/y);
		int a = 10;
		int b = 20;
		
		System.out.println(a+b);
		System.out.println('a'+'b');
		System.out.println("abcdef"+'b');
	}
	
	public static void main1(String[] args) {
		for(int i = 0; i < args.length; i++) {
			
			System.out.println(args[i]);
			
		}
		System.out.println("开心");
		
	}
}

class HelloWord {
	
	
}