# Random Question Solve

## Question: 1

    Create an Address Book application, where a user can create a new record, update record,
    delete record.
    
  ---

<span style="font-size: 20px; color: #FFB1B1;">AdressBook.java</span>


  ```java


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
---
<span style="font-size: 20px; color: #FFB1B1;">Main.java</span>

```java

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

## Question 2


    Create a Banking Application, where a user can create a new account, deposit money,
    withdraw money and check the balance.
---
<span style="font-size: 20px; color: #FFB1B1;">BankingApplication.java</span>

 ```java


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

---
<span style="font-size: 20px; color: #FFB1B1;">Main.java</span>

```java
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


