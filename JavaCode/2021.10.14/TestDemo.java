
public class TestDemo {
	
	public static int binarySearch(int[] arr,int target) {
		
		int left = 0;
		int right = arr.length -1;
		int ret = 0;
		
		while(left<=right) {
			
	    ret =(left + right)/2;
		if(arr[ret]<target) {
			
			left = ret+1;
			
		} else if(arr[ret]>target) {
			
			right = ret-1;
		} else {
			
			return ret;
			//break;
		} 
		
		// left++;
		// right--;
		}//endwhile
		return -1;
		// if(left>right) {
			
			// return -1;
		// }
		// return ret; 
	}
	
	public static void main(String[] args) {
		
		//二分查找
		int[] arr = {1,2,3,4,5,6,7,8};
		int target = 1;
		int ret = binarySearch(arr,target);
		if(ret==-1) {
			
			System.out.println("没找到，不存在这个数");
		} else {
			
			System.out.println("找到了，下标是： "+ ret);
		}
	}
}