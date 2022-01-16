/**
 * Created with IntelliJ IDEA.
 * Description:
 * User: Qkj
 * Date: 2021-11-04
 * Time: 11:11
 */
class Person {

    public String name;
    public int age;

}

public class TestDemo {
    public static void main(String[] args) {
        Person per = new Person();
        per.name = "qukangjie";
        per.age = 18;
        System.out.println(per.name);
        System.out.println(per.age);
        /*System.out.println(10+20);
        int a = 10;
        int b = 20;
        int c = 0;
        for(int i =0;i<10;i++) {

            c = a+b;
            a = b;
            b = c;
        }
        System.out.println(c);*/
    }
}
