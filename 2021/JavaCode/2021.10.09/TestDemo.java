
public class TestDemo {
	
	/**
	*  方法的重载（overload）
	*  条件
	*  1.方法名相同
	*  2.返回值不做要求
	*  3.参数列表不同 参数的个数||参数的类型
	*  4.必须在同一个类当中
	*  
	*
	*
	*/
	
	public static int sum(int x, int y) {
		
		return x+y;
	}
	
	public static double sum(double x, double y) {
		
		return x+y;
	}
	
	public static void main1(String [] args) {
		
		//System.out.println(11);
		int a = 10;
		int b = 20;
		System.out.println(sum(a,b));
		
		double d1 = 19.9;
		double d2 = 18.8;
		System.out.println(sum(d1,d2));
		
	}
	
	public static int fac(int x) {
		
		if(1==x) {
			
			return 1;
		}
		
		return x*fac(x-1);
		
	}
	
	public static void fun1(int n) {
		
		// if(x<10) {
			
			// System.out.println(x);
		// }
		// else {
		    // fun1(x/10);
			// System.out.println(x%10);
			
		// }
		
		if(n>9) {
			// n/=10;
			fun1(n/10);
		}
		System.out.println(n%10);
	}
	
	public static int sumFac(int x) {
		
		// if(x>1) { 
			// return x + sumFac(x-1);
		// }
		// else if(1==x) {
			
			// return 1;
		// }
		if(1==x) {
			
			return 1;
		}
		
		return x + sumFac(x-1);
	}
	
	public static int fun2(int x) {
		
		if(x>9) {
	    
		return x%10 + fun2(x/10);
			
		}
		return x;
	}
	
	public static int fun3(int x) {
		
		if(x<3) {
			
			return 1;
		}
		
	    return fun3(x-1) + fun3(x-2);
	}
	
	public static int fun4(int x){
		
		int f1 = 1;
		int f2 = 1;
		int f3 = 1;
		
		for(int i = 3;i<=x;i++) {
			
		f3 = f1 + f2;
        f1 = f2;
        f2 =f3;		
		
		}
		
		return f3;
	}
	
	public static int fun5(int x) {
		
		if(x<3) {
			return x;
		}
		
		return fun5(x-1) +fun5(x-2);
		
	}
	
	public static void main(String [] args) {
		
		/**
		 *   递归
		 *   
		 *
		 *
		 *
		 */
		 // int a = 5;
		 // System.out.println(fac(a));
		 
		 // int num = 123;
		 // fun1(num);
		 
		 // int a = 3;
		 // int ret = sumFac(a);
		 // System.out.println(ret);
		 
		 // int n = 1729;
		 // int ret = fun2(n);
		 // System.out.println(ret);
		 
		 // int n = 10;
		 // int ret = fun3(n);
		 // System.out.println(ret);
		 
		 // int num = 50;
		 // int ret1 = fun4(num);
         // System.out.println(ret1);
		 
		 // int n = 4;
		 // int ret = fun5(n);
		 // System.out.println(ret);
		 
	}
	
}


//1 1 2 3 5 8 13
//1 2 3 4 5 6 7