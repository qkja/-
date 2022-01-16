/**
 * Created with IntelliJ IDEA.
 * Description:  N+训练营
 * User: Qkj
 * Date: 2021-11-17
 * Time: 12:32
 */


public class TestDemo {

    public static void main(String[] args) {


        System.out.println(1.1*1.1);
//        System.out.println(1/2.0);
//        System.out.println(-1/2);
//        System.out.println(1/2);         //默认是向0取整
//        long de = 1112L;
//        System.out.println(de);
//        System.out.println(Double.MAX_VALUE);
//        System.out.println(Double.MIN_VALUE);

//        double d = 12.5;
//        float de = 12.5f;
//        System.out.println(d);
//        System.out.println(de);

//        int[] num = {1,1,1,2,3,4,5,6,6};
//        int len = removeDuplicates(num);
//
//        for(int i = 0;i < len;i++) {
//
//            System.out.print(num[i] +" ");
//        }

    }

    public static int removeDuplicates(int[] nums) {

        int n = nums.length;
        if(0==n) {
            return 0;
        }
        int de = 1;
        int mov = 1;
        while(mov < n) {

            if(nums[mov] != nums[mov - 1]) {

                nums[de] = nums[mov];
                de++;
            }
            mov++;
        }
        return de;
    }
}




//public static void main(String[]args){
//
//        }

/*public class HelloWorld {


}*/

//import static java.lang.System.*;

///**
// *
// *
// *
// */

//import

//public class TestDemo {
//
//    public static int removeDuplicates(int[] nums) {
//
//        int n = nums.length;
//        if(0==n) {
//            return 0;
//        }
//        int num = 0;
//        int i = 1;
//        while(i < n) {
//
//            if(nums[i] != nums[i-1]) {
//
//            }
//        }
//    }
//
//    public static void main(String[] args) {
//
//
//    int[] num = {1,2,2,3,4,5,6,6};
//        int len = removeDuplicates(num);
//
//
////        System.out.println(" " + 11);
//
////        System.out.println(Long.MAX_VALUE);
////        System.out.println(Long.MIN_VALUE);
//
////        out.println(11);
////          System.out.println(11);
////          out.println();
//
////        int a = 10;
////        int b = 20;
////        int $a = 10;
////        int _a = 10;
//
////        int a ;
////        System.out.println(a);
////        int a = 10;   //整型   4个字节
////        int b = 20;
////        System.out.println(a);     //打印且换行
////        System.out.print(a);       //只打印
////        System.out.printf("%d",a); //和printf一样      以格式化的形式输出内容
////        System.out.printf("%d",a); //和printf一样
////        System.out.println( );
////       out.println(Integer.MAX_VALUE);
////        System.out.println(Integer.MAX_VALUE + 1);
////        System.out.println(Integer.MIN_VALUE);
////        System.out.println(Integer.MIN_VALUE-1);
//
//    }
//
////    public static void main(String[] args) {
////
////        System.out.println("hello");
////        System.out.println("hello");
////
////        int a = 10;
////        System.out.println(a);
////        //System.out.println("HelloWord!!!");
////    }
//}
