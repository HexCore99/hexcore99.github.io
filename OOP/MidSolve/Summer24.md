# Summer 24

## Q1
```java [Person.java]

public class Person {
    public String name, gender;
    private int age;
    Person(String name, String gender){
        this.name = name;
    this.gender = gender;
    }

    int getAge(){
        return age;
    }
    void setAge(int age){
        this.age = age;
    }

    public static void main(String[] args) {
        Person p1 = new Person("Prof.Albert Einstein", "Male");
        System.out.println(p1.name);
    }
}

```

## Q2
::: code-group

```java [Vehicle.java]
public class Vehicle {
    protected  String brand;
    public Vehicle (String brand )
    {
        this.brand = brand;
    }

    public void honk (){
        System.out.println("Tuut, tuut!");
    }
}


```

```java [Car.java]
public class Car extends  Vehicle{
    private String modelName;
    Car(String brand, String modelName){
        super(brand);
        this. modelName = modelName;
        System.out.println("A vehicle horn is a sound-making device.");
    }

    @Override
    public void honk() {
        super.honk();
    }

    public static void main(String[] args) {
        Car myCar = new Car("Ford", "Mustang");
        myCar.honk();
        System.out.println(myCar.brand+" "+ myCar.modelName);
    }
}

```
:::


## Q3

```java
ouput:
------

United International University
11
12
13
13
2197
```


## Q4

```java
output:
-------
0
60
1050
330
60
That's one small step for man, one giant leap for mankind.

```


## Q5
::: code-group
```java [Test.java]

public class Test {
    public static void main(String[] args) {
    Shape[] s = new Shape[3];
    s[0] = new Rectangle();
    s[1] = new Circle();
    s[2] = new Triangle();

    for (Shape x: s){
        x.draw();
    }
    }
}


```
```java [Shape.java]
public class Shape {
    void draw() {
        System.out.println("drawing...");
    }
}
class Rectangle extends Shape {
    void draw() {
        System.out.println("drawing rectangle...");
    }
}
class Circle extends Shape {
    void draw() {
        System.out.println("drawing circle...");
    }
}
class Triangle extends Shape {
    void draw() {
        System.out.println("drawing triangle...");
    }
}


```
:::