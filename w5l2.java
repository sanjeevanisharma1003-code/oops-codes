//ENCAPSULATION
class Bankaccount{
    private String accountholdername;
    private String accountnumber;
    private double balance;
    public Bankaccount(String accountholdername,String accountnumber,double initialbal){
        this.accountholdername=accountholdername;
        this.accountnumber=accountnumber;
        setbal(initialbal);
    }
    public String getaccountholdername(){
        return accountholdername;
    }
    public void setaccountholdername( String accountholdername){
        this.accountholdername=accountholdername;
    }
    public String getaccountnum(){
        return accountnumber;
    }
    public void setaccountnum(String accountnumber){
        this.accountnumber=accountnumber;
    }
    public double getbalance(){
        return balance;
    }
    public void setbal(double balance){
        if(balance>=0){
            this.balance=balance;
        }
        else{
            System.out.println("invalid input");
        }
    }
    public void deposit(double amount){
        if (amount>0){
            balance+=amount;
            System.out.println("Successfully deposited "+ amount);
        }
        else{
            System.out.println("invalit deposit");
        }

    }
    public void withdraw(double amount){
        if(amount>0 && amount<=balance){
            balance-=amount;
            System.out.println("Successfully withdrawn "+amount );
        }
        else if(amount>balance){
            System.out.println("insufficient balance");
        }
    }
    public void display(){
        System.out.println("Accholder: "+accountholdername);
        System.out.println("Accnum: "+accountnumber);
        System.out.println("balance: "+balance);
    }

}

public class w5l2 {
    public static void main(String[] args) {
        Bankaccount acc=new Bankaccount("Tanvi", "84989382988", 500);
        acc.display();
        acc.deposit(150);
        acc.withdraw(100);
        acc.withdraw(600);
        acc.display();
    }
    
}
