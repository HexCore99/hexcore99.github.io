# Random Question Solve
## Question: 1


Write a program to print the names of students by creating a Student class. If no name is passed while creating an object of Student class, then the name should be "Unknown", otherwise the name should be equal to the String value passed while creating the object of Student class.

 ::: code-group
 ```java [Student.java]
public class Student {
    String name;
    Student(){
        name = "Unknown";
    }

    Student(String name){
        this.name = name;
    }

}


 ```

 ```java [Main.java]
public class Main {
    public static void main(String[] args) {
        Student std1 = new Student();
        Student std2 = new Student("Siyam");


    System.out.println(std1.name);
        System.out.println(std2.name);
    }
}


 ```
 
 :::


## Question: 2
---
Create an array of objects of the Student class, of size 3. The Student class is defined below. Create three objects of the Student class, with values, and assign the objects to the   array. Loop through the array and print the name, grade, and email of all students as below:

        Output: Peter 3 peter@gmail.com\n
                John 4 john@gmail.com
                Lisa 5 lisa@gmail.com

         Hints: Student[] st = new Student [3] //Array of objects in class
                  st[0] = new Student("Peter", 3, "peter@gmail.com")



---
::: code-group

```java [Student.java]
public class Student {
    String name;
    float grade;
    String gmail;
    Student(){
        name ="Unknown";
    }

    Student(String name, float grade, String gmail){
        this.name = name;
        this.grade = grade;
        this.gmail = gmail;
    }

}

```

```java [Main.java]
public class Main {
    public static void main(String[] args) {

    //    Student std1 = new Student();
    Student[] stdArray = new Student[3];
    stdArray[0] = new Student("Siyam", 4.67F, "Siyam999@gmail.com");
        stdArray[1] = new Student("Knight", 4.67F, "Knight@gmail.com");
        stdArray[2] = new Student("Fury", 4.67F, "Fury90@gmail.com");

        for (int i = 0; i<stdArray.length; i++){
            System.out.println(stdArray[i].name+" "+ stdArray[i].grade + " " +stdArray[i].gmail);
        }
    }
}

```
:::


## Question: 3
Design a class named Circle. Construct three circle objects with radius 2.0, 12, and 21 and display the radius and area of each. A no-argument constructor set the default value of radius to 1. A getArea() method is used to return the area of the circle.
Now implement the class

::: code-group
```java [Circle.java]

public class Circle {
double radius;

//default Constructor
Circle(){
radius = 1.0;
}

Circle(double radius){
    this.radius = radius;
}

double getArea(){
    return Math.PI * Math.pow(radius, 2);
}


}


```

```java [Main.java]
public class Main {
    public static void main(String[] args) {
        Circle circ1 = new Circle(2.0);
        Circle circ2 = new Circle(12);
        Circle circ3 = new Circle(21);

        System.out.println(circ1.getArea());
        System.out.println(circ2.getArea());
        System.out.println(circ3.getArea());


    }
}


```
:::

## Question 4:

Write the class named "Rectangle" which will have two attributes named length and width (both are integer in type). This class also contains two methods named CalculateArea and CalculatePerimeter (these two methods return integer values when they are called).

Now write a class named TestRectangle to test your code (contains main method).

a. In this class at first, print a line, "Enter dimensions of rectangle:". Then take two double values from the user.

b. Again, print a line, "Please enter a choice: 1. Area of rectangle. 2. Perimeter of rectangle.".

c. Then take an integer number as a user input from keyboard. If the integer is 1, show the area of the Rectangle; If choice is 2, print the perimeter.




                        Area = (width * length)
                        Perimeter = 2(1+w)

::: code-group
```java [Rectangle.java]

public class Rectangle {
    int length;
    int width;

    int CalculateArea(){
        return length * width;
    }

    int CalculatePerimeter(){
        return 2*(length+width);
    }

}


```
```java [TestRectangle.java]

import java.util.Scanner;

public class TestRectangle {
    public static void main(String[] args) {

        System.out.println("Enter dimensions of rectangle");
        Scanner sc = new Scanner(System.in);
        double length = sc.nextDouble();
        double width  = sc.nextInt();
        Rectangle rectangle = new Rectangle();
                 rectangle.length = (int)length;
                 rectangle.width  = (int)width;


        System.out.println("Please Enter a choice: ");
        System.out.println("1.Area of Rectangle. \n2. Perimeter of Rectangle");

        int choice = sc.nextInt();
        switch (choice){
            case 1:
                System.out.println(rectangle.CalculateArea());
                break;
            case 2:
                System.out.println(rectangle.CalculatePerimeter());
        }

    }
}



```
:::


## Question 5:
Create a class named 'Shape' with a method to print "This is shape". Then create two other classes named 'Rectangle', 'Circle' inheriting the Shape class, both having a method to print "This is rectangular shape" and "This is circular shape" respectively. Create a subclass 'Square' of 'Rectangle' having a method to print "Square is a rectangle". Now call the method of 'Shape' and 'Rectangle' class by the object of 'Square' class.


::: code-group

```java [Shape.java]
public class Shape {
    void printShape(){
        System.out.println("This is a Shape");
    }
}

```

```java [Rectangle.java]
public class Rectangle extends  Shape{
    void PrintRectangle(){
        System.out.println("This is a Rectangle");

    }
}


```


```java [Circle.java]
public class Circle extends Shape {
    void PrintCircle(){
        System.out.println("This is a Circle");
    }
}


```

```java [Square.java]
public class Square extends Rectangle {
    void PrintSquare(){
        System.out.println("Square is an Object");
    }
}

```
```java [Main.java]
public class Main {
    public static void main(String[] args) {
        Square sq = new Square();
        sq.PrintRectangle();
        sq.printShape();

    }
}
```

:::


## Question: 6
Write a program to create an Account class containing acc_no, balance as datamembers and disp() to display the details. Inherit it in Person class with all mentioned data members and functions. Person class also has name and NID_no as extra data members of its own. Override disp() function. Create an array of objects of the Person class, of size 5.

::: code-group

```java [Account.java]
public class Account {
    String acc_No;
    double balance;

    Account(String acc_No, double balance){
        this.acc_No = acc_No;
        this.balance = balance;
    }

    String disp(){
        return "Account No: "+acc_No + "\nBalance: "+balance;
    }
}

```

```java [Person.java]
public class Person extends Account{

String name;
String NID;
String acc_No;
double balance;

Person(String acc_No, double balance,String name, String NID){
    super(acc_No,balance);
    this.name = name;
    this.NID = NID;
}
    @Override
    String disp() {
        return super.disp() + "\nname: "+ name +"\nNID: "+NID +"\n\n";
    }

}

```

```java [Main.java]
public class Main {
    public static void main(String[] args) {


        Person[] person = new Person[5];

        person[0] = new Person("1",34.56,"A","01928329");
        person[1] = new Person("2",34.56,"B","01928329");
        person[2] = new Person("3",34.56,"C","01928329");
        person[3] = new Person("4",34.56,"D","01928329");
        person[4] = new Person("5",34.56,"E","01928329");


        for(Person p: person){
            System.out.println(p.disp());

        }
    }
}

```

:::

## Question: Y

 Create an Address Book application, where a user can create a new record, update record,
 delete record.

 ::: code-group


  ```java [AddressBook.java]


public class AddressBook {
    public String name;
    public String Division;

    AddressBook(String name, String Division){
        this.name = name;
        this.Division = Division;
    }

    public void updateRecord(String name, String Division){
        this.name =name;
        this.Division = Division;

    }


}

```

<!-- <span style="font-size: 20px; color: #FFB1B1;">Main.java</span> -->

```java [Main.Java]

import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void  addUser(ArrayList<AddressBook> addressBooks){
        System.out.println("---------------------> ADD USER <---------------------");
        String UserName;
        String division;

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your Name: ");
        UserName = sc.nextLine();
        System.out.println("Enter your Division: ");
        division = sc.nextLine();        

        addressBooks.add(new AddressBook(UserName, division));
        
       System.out.println(); 
       System.out.println();
    }
    

    public static void updateUser(ArrayList<AddressBook> addressBooks){
        System.out.println("---------------------> UPDATE USER <---------------------");
            Scanner sc = new Scanner(System.in);
            System.out.println("Enter the name of the user you want to update");
            String UserName = sc.nextLine();
            boolean found = false;
            for(int i = 0; i<addressBooks.size(); i++){

                if(addressBooks.get(i).name.equals(UserName)){
                    System.out.println("Enter the new name and division");
                    String newName = sc.nextLine();
                    String newDivision = sc.nextLine();

                    addressBooks.get(i).updateRecord(newName, newDivision);
                    System.out.println("User update SuccessFully!!");
                    found = true;
                    break;
                }
                System.out.println();
                if(!found) System.out.println("User not found!!!!!!!");
            }
            System.out.println();
            System.out.println();
    }

    public static void deleteUser(ArrayList<AddressBook> addressBooks){
        System.out.println("---------------------> DELETE USER <---------------------");
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the name of the user you want to delete");
        String UserName = sc.nextLine();
       boolean found = false; 
        for(int i=0; i<addressBooks.size(); i++){

            if(addressBooks.get(i).name.equals(UserName)){
                addressBooks.remove(i);
                System.out.println();
                System.out.println("User remove SuccessFully!!");
                found = true;
                break;
            }
            
    }
    System.out.println();
    if(!found) System.out.println("User not found!!!!!!!!!");
    System.out.println();
    System.out.println();
}
    
    public static void showUser(ArrayList<AddressBook> addressBooks){
        System.out.println("----------------------> User List <----------------------");
        for (AddressBook addressBook : addressBooks) {
            System.out.println("Name: "+addressBook.name + "  Division: " + addressBook.Division);
        }
        System.out.println();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<AddressBook> addressBooks = new ArrayList<AddressBook>();
     
       
          while(true){
            System.out.println("1. Add User");
            System.out.println("2. Update User");
            System.out.println("3. Delete User");
            System.out.println("4. Show User");
            System.out.println("5. Exit");
            System.out.println("Enter your choice");
            int choice = sc.nextInt();
            switch(choice){
                case 1 -> addUser(addressBooks);
                case 2 -> updateUser(addressBooks);
                case 3 -> deleteUser(addressBooks);
                case 4 -> showUser(addressBooks);
                case 5 -> System.exit(0);
                default -> System.out.println("Invalid choice");
            }


    } 

}


}

```
:::

## Question z


Create a Banking Application, where a user can create a new account, deposit money,
withdraw money and check the balance.
 ::: code-group

 ```java [Banking Application.java]


public class BankingApplication {
    
    private  String name;
    private  String setPassWord;
    private  double balance;
    
    public BankingApplication(String name, String setPassWord, double balance) {
        this.name = name;
        this.setPassWord = setPassWord;
        this.balance = balance;
    }
   
    //Getters
    public String getName() {
        return name;
    }
    
    public String getPassword() {
        return setPassWord;
    }
    
    public double getBalance() {
        return balance;
    }
    
    // Setters 
    public void setName(String name) {
        this.name = name;
    }
    
    public void setPassWord(String setPassWord) {
        this.setPassWord = setPassWord;
    }
    
    public void deposit(double amount) {
        balance += amount;
        System.out.println("You have deposited " + amount + " and your new balance is " + balance);
    }
    
    public void withdraw(double amount) {
        balance -= amount;
        System.out.println("You have withdrawn " + amount + " and your new balance is " + balance);
    }
     
    
    
}

 ```


```java [Main.java]
import java.util.ArrayList;
import java.util.Scanner;

public  class Main{



    public static void createAccount(ArrayList<BankingApplication> userLIst){
        System.out.println("---------------------->Create Account <------------------ ");
        String name;
        String Password;
        double balance;
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter Your Name: ");
        name = sc.nextLine();
        System.out.println("Enter Your Password: ");
        Password = sc.nextLine();
        System.out.println("Enter Your Balance: ");
        balance = sc.nextDouble();
        
        userLIst.add(new BankingApplication(name, Password, balance));
    }
    
    public static  BankingApplication ValidateUser ( ArrayList<BankingApplication>userList,String name, String password){
    
        for(BankingApplication user: userList){
            if(user.getName().equals(name) && user.getPassword().equals(password)){
                return user;
            }
        }

        return null;
    }
public static void depositMoney(ArrayList<BankingApplication> userList){
    System.out.println("---------------------->Deposit Money <------------------ ");
        String name;
        String Password;
        double balance;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your name: ");
        name = sc.nextLine();
        System.out.println("Enter your password: ");
        Password = sc.nextLine();

        //validate user 
        BankingApplication user = ValidateUser(userList, name, Password);

        if(user != null){
            System.out.println("Enter the amount you want to deposit: ");
            double amount = sc.nextDouble();
            user.deposit(amount);

        } else {
            System.out.println();
            System.out.println("User not found!!!!!!!!!!!!!!!!");
        }
       System.out.println(); 
       System.out.println();
}

public static void withdrawMoney(ArrayList<BankingApplication> userList){
    System.out.println("---------------------->Withdraw Money <------------------ ");
        String name;
        String Password;
        double balance;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your name: ");
        name = sc.nextLine();
        System.out.println("Enter your password: ");
        Password = sc.nextLine();

        //validate user 
        BankingApplication user = ValidateUser(userList, name, Password);

        if(user != null){
            System.out.println("Enter the amount you want to withdraw: ");
            double amount = sc.nextDouble();
        
        //Check if the Entered amount is greater than the amount
        if(user.getBalance() < amount){
            System.out.println();
            System.out.println("Insufficient Balance!!!!!!!!!!!!!!!!!!!");
        } else 
            user.withdraw(amount);

        } else {
            System.out.println();
            System.out.println("User not found!!!!!!!!!!!!!!!!!!!!");
        }
       System.out.println(); 
       System.out.println();

}


    public static void main(String[] args) {
        ArrayList<BankingApplication> userList = new ArrayList<BankingApplication>();
        Scanner sc = new Scanner(System.in);
        int choice;
        do{
            System.out.println("1. Create Account");
            System.out.println("2. Deposit Money");
            System.out.println("3. Withdraw Money");
            System.out.println("4. Exit");
            System.out.println("Enter your choice: ");
            choice = sc.nextInt();
            sc.nextLine();
            switch(choice){
                case 1 -> createAccount(userList);
                case 2 -> depositMoney(userList);
                case 3 -> withdrawMoney(userList);
                case 4 -> System.out.println("Exiting the application");
                default -> System.out.println("Invalid choice");
            }
        } while(choice != 4);
    }


}

```
 :::

