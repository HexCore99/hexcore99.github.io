# SUMMER 23

## Q1

```text

Initializing Vehicle class...
Making sure of initialization...
Initializing an instance of the Vehicle class...
Creating a default vehicle.
The vehicle emits a honking sound.
model=null brand=Unknown
Initializing an instance of the Vehicle class...
Creating a customized vehicle of brand: Ford and model: F- 150
The vehicle emits a custom honking sound: Loud horn sound
model=F- 150 brand=Ford

```


## Q2

::: code-group
```java [Electronic Device.java]
public class ElectronicDevice {


    String brand;
    double price;

    public ElectronicDevice(String brand, double price){
        this.brand = brand;
        this.price = price;
    }

    public void displayInfo(){
        System.out.println("Brand: "+ brand);
        System.out.println("Price: $"+price);
    }
}

```

```java [Smarphone.java]
public class Smartphone extends ElectronicDevice{
private    String model;
private String operatingSystem;
private    String IMEI;

Smartphone(String brand, double price, String model, String operatingSystem){
    super(brand, price);
    this.model = model;
    this.operatingSystem = operatingSystem;
}

public void displayInfo(){
    System.out.println("Brand: "+super.brand);
    System.out.println("Price: "+super.price);
    System.out.println("Model: "+ model);
    System.out.println("Operating System: "+ operatingSystem);
}

public  String getIMEI(){
    return IMEI;
}

}

```
:::


## Q3
::: code-group
```java [Main.java]
public class Main {
    public static void main(String[] args) {
        MyObject[] myObjects = {
                new Sphere(2.5),
                new Cone(1.9,8.9),
                new Cylinder(1.5,6.5),
                new Cone(2.7,5.7),
                new Sphere(3.5)
        };


        double volume = 0;
        for (MyObject obj: myObjects){
            volume+= obj.findVolume();
        }

        System.out.println("Sum of Volume is : "+ volume);

    }

```
```java [MyObject.java]
public class MyObject {
    private double r;

    MyObject(double r){
        this.r = r;
    }
    public double findVolume(){
        return -1.0;
    }

    public double getRadius(){
        return r;
    }
}

```

```java [Sphere.java]
public class Sphere extends MyObject {

Sphere(double r){
super(r);
}
public double findVolume(){
    double r = super.getRadius();
    return (4.0/3.0)*Math.PI*Math.pow(r,3);
}
}

```

```java [Cylinder.java]
public class Cylinder extends  MyObject{
    private double h;

    Cylinder(double r, double h){
        super(r);
        this.h = h;
    }
    @Override
    public double findVolume() {
        double r  = super.getRadius();
        return Math.PI*Math.pow(r,2) * h;
    }

    public double getHeight(){
        return h;
    }
}

```

```java [Cone.java]
public class Cone extends Cylinder{

    Cone(double r, double h){
        super(r, h);
    }

    public double findVolume(){
        double r = super.getRadius();
        double h = super.getHeight();

        return 1/3.0 * Math.PI*r*r *h;
    }
}

```

:::


## Q4

::: code-group
```java [FinalContext.java]

public class FinalContext {
    public final void calculate(){
        System.out.println("calculate method is called");
    }
}
```

```java [StaticContext]

public class StaticContext extends FinalContext {
    final static int value;
    static {
        value = 8;
    }

   private double mark = 90;
    private static int count;

    private static int getCount(){
        return ++count;
    }

    private double getMark(){
        return mark;
    }


    public static void main(String[] args) {
        count++;

        System.out.println("count = "+getCount());
        System.out.println("value = "+ value);
        FinalContext sv = new StaticContext();
        System.out.println("mark  ="+((StaticContext)sv).getMark());
        sv.calculate();

    }

}

```
:::


## Q5 A

## i
No, a class cannot be both abstract and final simultaneously. This is because:

An abstract class is meant to be inherited from and extended by other classes. It's designed to be incomplete and requires subclasses to implement its abstract methods.

A final class, on the other hand, cannot be inherited or extended. It's designed to be complete in itself and prevent further modification through inheritance.


## ii

Yes, there are reasons to create an abstract class without instance variables or methods:

To define a common type for a group of related classes. It can serve as a base type for a family of classes, even if it doesn't provide any shared implementation.

To provide default implementations for certain methods that can be overridden by subclasses


# iii

A class with an abstract method needs to be declared abstract because it cannot be instantiated. This is because an abstract class is not meant to be used directly; it is meant to be subclassed and extended by other classes

## Q5 B
::: code-group
```java [Animal.java]
public abstract class Animal {
}

class Baby extends Animal{
    public double age;

}

class Cat extends Animal{
    public void sleep(int time){
        System.out.println("Sleeping");
    }
}


```

```java [Main.java]
public class Main {

    public void speak(Animal target){
        if (target instanceof  Baby){
            System.out.println("WAAHHH");
        }
        else if (target instanceof Cat){
            System.out.println("Meow");
        }
        else{
            System.out.println("Grrrr");
        }
    }


}
```

:::