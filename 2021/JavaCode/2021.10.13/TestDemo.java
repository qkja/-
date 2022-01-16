import java.util.Arrays;
public class TestDemo {
	
	public static int arraryMax(int[] arr) {
		
		int max = arr[0];
		
		for(int i=1;i<arr.length;i++) {
			if(max<arr[i]) {
				
				max = arr[i];
			}	
		}
		
		return max;
	}
	
	//查找
	public static int search(int[] arr,int target) {
		
		
		int i = 0;
		while(i<arr.length) {
			
			if(arr[i]==target) {
				
				break;
			}
			
			i++;
		}
		
		if(i==arr.length) {
			
			return -1;
		} else {
			
			return i;
		}
		// for(int i=0;i<arr.length;i++) {
			
			// if()
		// }
	}
	
	public static void main(String [] args) {
		
		int target = 3;
		int[] arr ={1,2,3,4,5};
		int max = arraryMax(arr);
		int ret = search(arr,target);
		if(ret!= -1) {
			
			System.out.println("找到了,下标是" + ret);
		} else {
			
			System.out.println("没找到");
		}
		
		System.out.println(max);
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	// public static int[] fun(int[] arr) {
		
		// int[] ret = new int[arr.length];
		
		// for(int i = 0; i<arr.length;i++) {
			
			// ret[i] = arr[i]*2;
		// }
		// return ret;
	// }
	
	// public static int[] copyArr(int[] arr) {
		
		// int[] output = new int[arr.length];
		// for(int i = 0;i<arr.length;i++) {
			
			// output[i] = arr[i];
		// }
		// System.out.println(output);
		// return output;
	// }
	
	// public static void main(String [] args) {
		
		// 数组拷贝
		// int[] arr = {1,2,3,4,5,6,7,8,9};
		//int[] output = copyArr(arr);
		//System.out.println(output);
		//四种方式
		
		//第一种 for循环
		
		//第二种 
        // int[] output =Arrays.copyOf(arr,arr.length);
	   
	    //第三种 
	    // int[] ret = new int[arr.length];
	    // System.arraycopy(arr,0,ret,0,arr.length);
		//第四种
		// int[] ret = arr.clone();
		// System.out.println(Arrays.toString(ret));
	    //String str = 
		
		//System.out.println(11);
		
		//int[] arr = {1,2,3,4};
		// int[] output =fun(arr);
		// for(int x :output) {
			
			// System.out.println(x);
		// }		
	//}
}