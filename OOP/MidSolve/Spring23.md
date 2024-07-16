## SPRING 23

## Q1
```java 

I am the base constructor
I have an extra value: 5
I borrow 5 form a constructor
I have more values: 6.3
I have no param

```


## Q2
::: code-group
```java [Human.java]
package M1;

public class Test {
    public static void main(String[] args) {
        Human h1 = new Human(1,"high",true);
        Human h2 = new Human(2,"high",true);

        Monster m1 = new Monster("Cookie Monster",100);

        if (m1.eat(h1)){
            System.out.println("Monster has eaten human "+h1.getId());
        }else {
            System.out.println("Human Escaped");
        }
        System.out.println(m1.scare(h2.bravery));
    }
}


```

```java [Monster.java]


package M1;

public class Monster {
    String name;
    double weight;

    Monster(String name, double weight) {
        this.name = name;
        this.weight = weight;
        this.increaseWeight(10);
    }

    public void increaseWeight(double weight) {
        System.out.println("New weight  of monster =" + (this.weight + weight));
    }

    boolean eat(Human h) {
        if (h.getIntelligence().equals("high")) {
            return true;
        }
       this. increaseWeight(10);
            return false;
    }

    public String scare(boolean bravery) {
        if (bravery)
            return "Human is too brave to scare";
        else return "Human is scared";

    }

}


```


```java [Test.java]
package M1;

public class Test {
    public static void main(String[] args) {
        Human h1 = new Human(1,"high",true);
        Human h2 = new Human(2,"high",true);

        Monster m1 = new Monster("Cookie Monster",100);

        if (m1.eat(h1)){
            System.out.println("Monster has eaten human "+h1.getId());
        }else {
            System.out.println("Human Escaped");
        }
        System.out.println(m1.scare(h2.bravery));
    }
}
```
:::



## Q3

::: code-group
```java [Calculator.java]
public class Calculator {
    public int a;
    public int b;
    Calculator (int firstNumber, int secondNumber){
        this.a =firstNumber;
        this.b = secondNumber;

    }
    public  int sum (){
        return a+b;
    }

    public int subtract(){
        return a-b;
    }
}
```


```java [AdvancedCalculator.java]
public class AdvancedCalculator extends Calculator{
    int firsNumber;
    int  secondNumber;
    int[] numbers = new int[3];
    AdvancedCalculator(int firstNumber, int secondNumber, int[] arr){
        super(firstNumber, secondNumber);

        this.firsNumber = firstNumber;
        this.secondNumber =secondNumber;
        this.numbers=arr;
    }

    @Override
    public int sum(){
        int total = 0;
        total += super.sum();
        for(int i: numbers){
            total+= i;
        }
    return total;
    }
    public int subtract(){
        return super.subtract();
    }

}
```

```java [Main.java]
public class Main {

    public static void main(String[] args) {
        AdvancedCalculator c = new AdvancedCalculator(1,2,new int[]{3,4,5});
        System.out.println("Subtraction result: "+ c.subtract());
        System.out.println("Summation result: "+ c.sum());
    }


}
```
:::


## Q4

```java  
output:
I am in Child Class 1
I am in Child Class 2
I am in Parent Class: 3
I am in Child Class 4
I am in Parent Class: 5
I am in Child Class 6
```


## Q6
::: code-group
```java[Cake.java]
public class Cake {
    protected String name;
    protected  double rate;

    public Cake (String n, double r){
        name = n;
        rate = r;
    }

    public double callcPrice(){
        System.out.println("Print the calculated price");
        return 0;
    }

    public void printDetails(){
        System.out.println("Prints the detail");
    }
}
```

```java [OrderCake.java]
public class OrderCake  extends Cake{
    double weight;
    public OrderCake(String n, double r, double  w){
        super(n, r);
        weight = w;

    }

    @Override
    public double callcPrice() {
        return super.rate * weight;
    }

    @Override
    public void printDetails() {
        System.out.println("Name: "+ super.name);
        System.out.println("Rate: "+super.rate);
        System.out.println("Weight: "+ weight);
        System.out.println("Total Price: "+(int) callcPrice());
    }
}
```

```java [ReadymadeCake.java]
public class ReadymadeCake extends Cake{
    int quantity;
    public ReadymadeCake(String name, double r, int q) {
        super(name, r);
        quantity = q;
    }
    @Override
    public double callcPrice() {
        return super.rate * quantity;
    }

    @Override
    public void printDetails() {
        System.out.println("Name: "+ super.name);
        System.out.println("Rate: "+super.rate);
        System.out.println("Quantity: "+ quantity);
        System.out.println("Total Price: "+ (int)callcPrice());
    }
}

```

```java [Main.java]
public class Main {
    public static void main(String[] args) {
        Cake cake[];
        cake = new Cake[2];
        cake[0] = new OrderCake("OrderCake", 150, 3);
        cake[1] = new ReadymadeCake("ReadymadeCake", 200, 2);


        for (int i = 0; i < cake.length; i++) {
            cake[i].printDetails();
            System.out.println("_______________________________________");
        }
    }
}
```
:::