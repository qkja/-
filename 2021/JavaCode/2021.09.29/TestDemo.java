public class TestDemo {
	
	public static void main(String[] args) {
		// byte a = 10;
		// byte b = 20;
		// int c = a + b;
		// System.out.println(c);
		//final int a = 10;
		//a = 20;
		//整形转换成字符串
		int num = 10;
		String str1 = num + "";
		
		String str2 = String.valueOf(num);
		
		//字符串转换成整型
		
		
	}
	
	public static void main1(String[] args) {
		
		System.out.println(Byte.MAX_VALUE);
		System.out.println(Double.MAX_VALUE);
		// 字符串数据类型
		// 转义字符
		byte a = 10;
		byte b = 20;
		byte c = (byte)(a + b);
		System.out.println(c);
		String str = "\"hello world\"";
		System.out.println(str);
	}
}