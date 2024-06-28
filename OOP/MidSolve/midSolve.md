# SPRING 24



## Q1

::: code-group
```java [Point2d.java]
 class Point2D {
    int x , y;
    public Point2D(int x, int y){
        this.x = x;
        this.y = y;
        System.out.println("Point2D Constructor");
    }


    public String Display(){
        return "X = "+ this.x +", Y=" + this.y;
    }
}

 class Point3D extends Point2D{

     int z;
     Point3D(int x, int y, int z){
         super(x,y);
         this.z = z;
         System.out.println("Point3D Constructor");

     }


     @Override
     public String Display() {
         return super.Display() + ", Z = " + this.z;
     }
 }

```

```java [Test.java]

public class Test {
    public static void main(String[] args) {
        Point2D p2D = new Point2D(1,2);
        System.out.println(p2D.Display());
        Point3D p3D = new Point3D(5,4,3);
        System.out.println(p3D.Display());
    }
}


```

:::


## Q2



::: code-group

```java [Myparent.java]
public class Myparent {
    private int p;
    public final int myfunction(){
        return p*p;
    }
    public void set_p(int Q){
        p = Q;
    }

    // Added  Constructors
    Myparent(){
    }

    Myparent(int p){
        this.p = p;
    }
    //Added Getters
    public int get_P(){
        return p;
    }
}


```

```java [Mychild.java]
public class Mychild extends Myparent{

   public Mychild(int K){
       super(K);
   }

//changed myfunction to myfunc
   public final int myfunc(){
       return get_P()*get_P() + 1;
   }

   //Added myroot method.
   public double myroot(){
       return Math.sqrt(get_P());
   }
   //Added Default Constructor
    Mychild(){
    }

}
```
```java [MyTest.java]
public class Mytest {
    public static void main(String[] args) {
        Myparent c1,c2;
        c1 = new Mychild(2);
        c2 = new Mychild();
        c2.set_p(2);

        int x = c2.myfunction();

        double y = ((Mychild)c1).myroot();
        System.out.println("X = "+x +", y= " + y);
    }
}
```

:::


## Q3

OUTPUT:

```java 
3
1
2
3
1
13
11
```

## Q4
::: code-group

```java [FoodItem.java]
public class FoodItem {
    public double c, z;
    public String t;
    public double getprice(double amount){
        return c*amount*(1+z/100);
    }
}

```
```java [Fish.java]
public class Fish extends FoodItem{
    public void setparameter(){
    if(t == "Carp"){ c = 20; z = 15; }

    else if(t == "medium"){c = 25; z = 20;}

    else if(t == "small"){
        c = 200; z = 25;}
}

    public Fish(String t){
    this.t = t;
    }

}

```
```java [Vegetable.java]
public class Vegetable extends FoodItem{
    public void setparameter(){
    if(t == "Spinach"){ c = 20; z = 15; }
    else if(t == "Cauliflower"){
        c = 25; z = 18;
    }
}
    public Vegetable(String t){
    this.t = t;
    }
}


```

```java [MyTest.java]
public class MyTest {
    public static void main(String[] args) {
        FoodItem veg, fish;

        fish = new Fish("small");
        ((Fish)fish).setparameter();
        System.out.println(fish.getprice(3));


        veg = new Vegetable("Cauliflower");
        ((Vegetable)veg).setparameter();
        System.out.println(veg.getprice(2));
    }
}

```
:::