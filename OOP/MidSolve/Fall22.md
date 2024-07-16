# FALL 22

## Q1

```java
output:

Valar dohaeris
Valar Morghulis
Best TV series after the Breaking  Bad
Valar dohaeris
Valar Morghulis
John Snow 404
Impact: 0.0
Intent: 0.0
Daenerys Targaryen
Impact: 4.8
Intent: 0.0

```

## Q2
```java [Movie.java]

public class Movie {
    private String name;
    protected String origin;
    public  String genre;
    public float rating;

    public String getName(){
        return name;
    }
    public String getOrigin(){
        return origin;
    }

    public Movie(String name, String origin, String genre, float rating){
       this.genre = genre;
       this.name = name;
       this.rating = rating;
       this.origin = origin;
    }
    public Movie (String name, String genre){
        this.genre =  genre;
        this.name = name;
    }

    public void Details(){
        System.out.println("You are watching "+ name);
        System.out.println("Origin: "+origin);
        System.out.println("Genre: "+genre);
        System.out.println("Ratin: "+ rating);
    }

    public static void main(String[] args) {
        Movie movie = new Movie("Shutter Island","USA","Thriller", 8.2F);
        movie.Details();
    }


}
```

## Q3
::: code-group
```java [Vehicle.java]
package transport;

public class Vehicle {
    private int noOfWheels;

    public Vehicle(int noOfWheels){
        this.noOfWheels = noOfWheels;
    }

    public int getNoOfWheels(){
        return noOfWheels;
    }
}
```

```java [Bus.java]
package publicTransport;

import transport.Vehicle;

public class Bus extends Vehicle {
    private int licenseNo;

    Bus(int licenseNo){
        super(4);
        this.licenseNo = licenseNo;
    }

    public int getLicenseNo(){
        return licenseNo;
    }
    public void setLicenseNo(int licenseNo){
        this.licenseNo = licenseNo;
    }
}
```
:::

## Q4

::: code-group
```java [Fifa.java]

public class Fifa {
   public int noOfGoals;
   public String venue;

   Fifa(){
       System.out.println("Who will be the Winner");
   }

   Fifa(int noOfGoals, String venue){
       this();
       this.noOfGoals = noOfGoals;
       this.venue = venue;
   }

   public String toString(){
       return "Fifa -> noOfGoals: "+noOfGoals +", venue: "+venue;
   }

}
```
```java [ArgentinaFans.java]

public class ArgentinaFans extends Fifa{


    public int havingWorldCups;
    ArgentinaFans(int noOfGoals, String venue, int  havingWorldCups){
        super(noOfGoals, venue);
        this.havingWorldCups = havingWorldCups;
        System.out.println("Argentina will win");
    }
    @Override
    public String toString(){
        return "ArgentinaFans -> [Fifa -> noOfGoals: "+super.noOfGoals +", venue: "+super.venue+", havingWorldCups: "+ havingWorldCups;
    }


    public void incrementWorldCups(){
        havingWorldCups++;
    }
}
```

```java [BrazilFans.java]
public class BrazilFans extends Fifa{
public int havingWorldCups;
    BrazilFans(int noOfGoals, String venue, int  havingWorldCups){
        super(noOfGoals, venue);
        this.havingWorldCups = havingWorldCups;
        System.out.println("Brazil will win");
    }

    @Override
    public String toString(){
        return "BrazilFans -> [Fifa -> noOfGoals: "+super.noOfGoals +", venue: "+super.venue+", havingWorldCups: "+ havingWorldCups;
    }


    public void incrementWorldCups(){
        havingWorldCups++;
    }
}
```

```java [Mid.java]
public class Mid {
    public static void main(String[] args) {
        ArgentinaFans arg = new ArgentinaFans(10,"Qatar",2);
        BrazilFans braz = new BrazilFans(7,"Qatar",5);

        System.out.println(arg.toString());
        System.out.println(braz.toString());

        if (arg.noOfGoals>braz.noOfGoals){
            arg.incrementWorldCups();
        } else{
            braz.incrementWorldCups();
        }

        System.out.println(arg);
        System.out.println(braz);

    }
}
```
:::

## Q5
```java
output:

Hello from P Class!
Hello from C Class!
Double value: 11.22
Double value: 2.99
Integer value: 10
Double value: 3.145
```