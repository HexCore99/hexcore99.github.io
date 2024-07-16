# Fall 23

## Q1.a
::: code-group
```java [Logarithm.java]
public class Logarithm {
    int b;
    double x;
    Logarithm( int b, double x){
        this.b = b;
        this.x = x;
    }

    Logarithm(Logarithm log){
        b= log.b;
        x= log.x;
    }

    Logarithm(){
        this.b = 0;
        this.x = 0;
    }

    double myfunc(){
        if (b > 1 && x > 0){
            return Math.floor(Math.log(x)/Math.log(b));
        }
        else return 0;
    }
}


```

```java [Main.java]
public class Main{
    public static void main(String[] args) {
        Logarithm log1 = new Logarithm(2,9);
        Logarithm log2 = new Logarithm(log1);
        Logarithm log3 = new Logarithm();

        System.out.println(log1.b +" "+ log1.x + " " + log1.myfunc());
        System.out.println(log2.b +" "+ log2.x + " " + log2.myfunc());
        System.out.println(log3.b +" "+ log3.x + " " + log3.myfunc());

    }
}

```
:::

## Q1.b

 OUTPUT:
```java
Animal instance initialization
Default Animal
Animal instance initialization
Default Animal
Color is: UnknownName is null
Color is: UnknownName is null

```

## Q2.(a)

```java
public class BankAccount {
    public String name;
    private String account_id;
    private double balance;

    BankAccount (String name, double balance , String gender){
        this.name = name;
        this.balance = balance;
        this.account_id = gender +"-"+name;
    }

    public String getAccount_id(){
        return account_id;
    }
    public double getBalance(){
        return balance;
    }

    public void setBalance(double balance){
        if (this.balance-balance>= 0){
            this.balance -= balance;
        }
    }
}

class Test{
    public static void main(String[] args) {
        BankAccount b = new BankAccount("Mr.Rahman", 1000, "M");
        System.out.println("Account id:"+ b.getAccount_id());
        System.out.println("balance before:"+b.getBalance());
        b.setBalance(2000);
    }
}
```

## Q2. (b)

::: code-group

```java [Order.java]
public class Order{
    public static void main(String[] args) {
        PizzaShop p = new PizzaShop();
        p.order(2,4);
        p.order(1,2,1);
        p.order(3);
    }
}
```

```java [PizzaShop]

public class PizzaShop {
    private int pizza_price = 320;
    private int drink_price = 40;
    private int fries_price = 100;

    PizzaShop(){
        System.out.println("Welcome to pizza shop");
    }

    public void order(int pizzaOrdered){
        int totalBill = pizzaOrdered *pizza_price;
        System.out.println("You ordered "+pizzaOrdered +" pizzas");
        System.out.println("Total bill: "+totalBill + "taka");
    }
    public void order(int pizzaOrdered, int drinksOrdered){
        int totalBill = pizzaOrdered *pizza_price + drinksOrdered * drink_price;
        System.out.println("You ordered "+pizzaOrdered +" pizzas, "+ drinksOrdered+" drinks");
        System.out.println("Total bill: "+totalBill + " taka");
    }
    public void order(int pizzaOrdered, int drinksOrdered, int friesOrdered){
        int totalBill = pizzaOrdered *pizza_price + drinksOrdered * drink_price + friesOrdered*fries_price;
        System.out.println("You ordered "+pizzaOrdered +" pizzas, "+ drinksOrdered+" drinks, " + friesOrdered+ " fries");
        System.out.println("Total bill: "+totalBill + " taka");
    }
}


```
:::

# Q3

::: code-group

```java [Vehicle.java]
public class Vehicle {
    private String make;
    private String model;
    public Vehicle(String make, String model){
        this.make = make;
        this.model = model;
    }
    public void start(){
        System.out.println("[Vehicle] The vehicle is starting");
    }

    public void stop(){
        System.out.println("[Vehicle] The vehicle is stopping");
    }
    public void drive(){
        System.out.println("[Vehicle] The vehicle is moving");
    }
}

```

```java [Car.java]


public class Car extends  Vehicle{
private int numberOfDoors;
public Car(String make, String model, int numberOfDoors){
    super(make, model);
    this.numberOfDoors = numberOfDoors;
}

@Override
public void drive(){
    System.out.println("[Car] The car is moving");
}

public void honk(){
    System.out.println("[Car] Honk! Honk!");
}
}
```

```java [Main.java]

public class Main{
    public static void main(String[] args) {
        Vehicle car1 = new Car("make001","model1001", 4);
        car1.drive();
        ((Car)car1).honk();
    }
}


```
:::

# Q4
::: code-group

```java [Ride.java]
public class Ride {
    final static int speedLimit = 80;
}

```

```java [Bike.java]
public class Bike extends Ride{

    double initial_speed = 20;
    double acceleration = 2;

    double getHighestAccelerationTime(){
        return  (speedLimit - initial_speed)/acceleration;
    }
    double calculateFine(int hour) {
        double temp = hour - getHighestAccelerationTime();
        if (temp>0) {
            return 50 + (hour - getHighestAccelerationTime() * 100);
        }
        else return 0;
    }
}


```

```java [Car.java]
public class Car extends Ride{

    double initial_speed = 40;
    double acceleration = 10;

    double getHighestAccelerationTime(){
        return  (speedLimit - initial_speed)/acceleration;
    }

    double calculateFine(int hour) {
        double temp = hour - getHighestAccelerationTime();
        if (temp>0) {
            return 100 +(temp * 150);
        }
        else return 0;
    }


}
```

```java [Microbus.java]
public class Microbus extends Ride{
    double initial_speed = 15;
    double acceleration = 15;

    double getHighestAccelerationTime(){
        return  (speedLimit - initial_speed)/acceleration;
    }

    double calculateFine(int hour) {
        double temp = hour - getHighestAccelerationTime();
        if (temp>0) {
            return 3000;
        }
        else return 0;
    }
}



```

```java [Uthao]
public class Uthao{
    public static void main(String[] args) {
        Ride car = new Car();
        System.out.println(((Car)car).calculateFine(10));
    }
}

```
:::

# Q5 

## a
 No, you cannot define an abstract method in a non-abstract class. The reason is that abstract methods don't have an implementation in the class where they are declared. If a non-abstract class were allowed to have abstract methods, it would be possible to create instances of that class, which would then have methods without implementations. This would lead to runtime errors when trying to call those unimplemented methods.

## b

No, I do not agree with this statement. Abstract classes can contain variables. The reason is that abstract classes are still classes, and like any other class, they can have fields (variables) to store data.The abstraction in abstract classes primarily applies to methods, not to variables or fields.That's why abstract class can contain variables.

## c, d, e

::: code-group
```java [ReadingMaterial.java]
public abstract class ReadingMaterial {
    private String title;
    private String author;
    private int year;
    ReadingMaterial(String title, String author, int year){
        this.title = title;
        this.author = author;
        this.year = year;
    }
    String getTitle(){
        return title;
    }
    String getAuthor(){
        return author;
    }
    int getYear(){
        return year;
    }
    abstract void displayDetails();
}
```

```java [Book.java]
public class Book extends ReadingMaterial{
    private String genre;
    Book(String title, String author, int year, String genre){
        super(title,author,year);
        this.genre = genre;
    }

    @Override
    void displayDetails() {
        System.out.println("Title: "+ getTitle());
        System.out.println("Author: "+ getAuthor());
        System.out.println("Year "+ getYear());
        System.out.println("Genre: "+genre);
    }
}
```

```java [Magazine.java]

public class Magazine extends ReadingMaterial {
   private int issueNumber;

    Magazine(String title, String author, int year,  int issueNumber){
        super(title,author,year);
        this.issueNumber = issueNumber;
    }


    @Override
    void displayDetails() {
        System.out.println("Title: "+ getTitle());
        System.out.println("Author: "+ getAuthor());
        System.out.println("Year "+ getYear());
        System.out.println("Issue Number "+ issueNumber);
    }
}


```
:::