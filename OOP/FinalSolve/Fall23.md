## Q1 a
::: code-group

```java [Transaction.java]
public interface Transaction {
    public void give();
    public void receive();
}

```

```java [Payment.java]
public abstract class Payment implements Transaction{
    double amount;
    String currency = "BDT";
    @Override
    public void give() {
        amount+=getTax()+getCharge();
        System.out.println(currency+" "+amount+" is paid!");
    }

    @Override
    public void receive() {
        System.out.println("[Nothing to Recieve]");
    }
    public abstract double getCharge();
    public  double getTax(){
        return amount*((15.6)/100) ;
    }
}

```

```java [CashPay.java]
public class CashPay extends Payment{

    CashPay(double amount){
        this.amount = amount;
    }
    @Override
    public double getCharge() {
        return 0;
    }
}
```
```java [CheckPay.java]
public class CheckPay extends Payment{
    CheckPay(double amount){
        this.amount = amount;
    }
    @Override
    public double getCharge() {
        return 10;
    }
}
```
```java [CreditCardPay.java]
public class CreditCardPay extends  Payment{
    CreditCardPay(double amount){
        this.amount = amount;
    }
    @Override
    public double getCharge() {
        return 0.025*amount;
    }
}
```
:::

## Q1 b

::: code-group
```java [ShapeTest.java]
public class ShapeTest {
public static void draw(Shape obj){
    System.out.println("drawing over "+obj.getArea()+" area");
}

    public static void main(String[] args) {
        Shape r = new Rectangle(5,6);
        Shape d = new Square(3);
        draw(r);
        draw(d);
    }
}
```
```java [Shape.java]
public interface Shape {
    double getArea();
}
```
```java [Rectangle.java]
public class Rectangle implements Shape{
    private  double width, length;
    Rectangle(double width, double length){
        this.width = width;
        this.length = length;
    }
    @Override
    public double getArea() {
        return width*length;
    }
}
```

```java [Square.java]
public class Square extends Rectangle{
    private double width, length;
    Square(double side) {
        super(side,side);
    }
    @Override
    public double getArea() {
        return super.getArea();
    }
}
```
:::

## Q2 a

```java [file.java]
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.io.PrintWriter;

public class file {
    public static void main(String[] args) {
    int consonantCount = 0;
        try(BufferedReader br = new BufferedReader(new FileReader("input.txt"))){
            int ch;
            while ((ch = br.read()) != -1){
            if(isConsonant((char)ch)){
                consonantCount++;
            }
            }
        br.close();
        } catch (IOException e) {
            e.printStackTrace();
        }

        try(PrintWriter pw = new PrintWriter("output.txt")){
            pw.println(consonantCount);
        } catch (IOException e) {
            e.printStackTrace();
        }


    }
    public  static boolean isConsonant(char ch){
        ch = Character.toLowerCase(ch);
        return "aeiou".indexOf(ch) == -1 && ch>='a' && ch<='z';
    }

}
```
## Q2 b (ii)
```java

output:
b
d
e
f
```

## Q4
::: code-group
```java [Address.java]
public class Address {
    String building_number , area, city;
    int zip_code;
    Address(String building_number, String area, String city, int zip_code){
        this.building_number = building_number;
        this.area = area;
        this.city = city;
        this.zip_code = zip_code;
    }

    int getZip_code(){
        return zip_code;
    }
}
```
```java [Test.java]
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

public class Test {
    public static void main(String[] args) {
        ArrayList<Address> addresses = new ArrayList<>();
        addresses.add((new Address("19/A", "Dhanmondi", "Dhaka", 1209)));
        addresses.add(new Address("2/A","Tejgaon","Dhaka",1215));
        addresses.add(new Address("65","Nirala","Kulna",9100));
        addresses.add(1,new Address("215","Aamtola","Barishal",8200));
        addresses.set(2,new Address("36","Gulshan","Dhaka",1212));

        Collections.sort(addresses, new Comparator<Address>() {
            @Override
            public int compare(Address o1, Address o2) {
                return Integer.compare(o1.zip_code,o2.zip_code);
            }
        });

        addresses.remove(2);
    }
}
```
:::


## Q5
::: code-group
```java [MyMain.java]
import java.util.ArrayList;
import java.util.Arrays;

public class MyMain {
    public static void main(String[] args) throws InterruptedException {
        MyThread t1 = new MyThread();
        MyThread t2 = new MyThread();
        MyThread t3 = new MyThread();
        MyThread t4 = new MyThread();

        t1.setArr(new ArrayList<>(Arrays.asList(3,1,-5,10)));
        t2.setArr(new ArrayList<>(Arrays.asList(-2,6,7,8,0)));
        t3.setArr(new ArrayList<>(Arrays.asList(12,-6,4,2,1)));
        t4.setArr(new ArrayList<>(Arrays.asList(10,5,-9,18,7)));
        t1.start();
        t2.start();
        t3.start();
        t4.start();


        t1.join();
        t2.join();
        t3.join();
        t4.join();

    int max_ele = t1.getMax();
        max_ele = Math.max(max_ele, t2.getMax());
        max_ele = Math.max(max_ele, t3.getMax());
        max_ele = Math.max(max_ele, t4.getMax());



        System.out.println("Max element is: " + max_ele);

    }
}
```
```java [MyThread.java]
import java.util.ArrayList;

public class MyThread extends Thread{

    int max = Integer.MIN_VALUE;
    public ArrayList<Integer> arr = new ArrayList<>();

    public void setArr(ArrayList<Integer> arr) {
    this.arr = arr;
    }
    public int getMax() {
    return max;
    }

    @Override
    public void run() {
        for (int i = 0; i < arr.size(); i++) {
            max = Math.max(max, arr.get(i));
        }
    }


}
```
:::