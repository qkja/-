
public class TestDemo {
	
	public static int fun1(int x) {
		
		if(x==0) {
			
			return 0;
		}
		
		if(1==x) {
			
			return 2;
		}
		return 2*fun1(x-1);
			
	}
	
	public static void move(char pos1,char pos2) {
		
		System.out.println(pos1+"->"+pos2+" ");
		
	}
	
	public static void hanoi(int n ,char pos1,char pos2 ,char pos3) {
		
		if(1==n) {
			
			move(pos1,pos2);
		} else {
			
			hanoi(n-1,pos1,pos3,pos2);
			move(pos1,pos2);
			hanoi(n-1,pos2,pos1,pos3);
		}
		
	}
	public static void main(String [] args) {
		
		// System.out.println(11);
		// int n =3;
		// int ret = fun(n);
		// System.out.println(ret-1);
		
		char pos1 = 'A';
		char pos2 = 'B';
		char pos3 = 'C';
		int x = 1;
		hanoi(1, pos1, pos2 , pos2);
		System.out.println();
		hanoi(2, pos1, pos2 , pos2);
		System.out.println();
		hanoi(3, pos1, pos2 , pos2);
		System.out.println();
	}
}