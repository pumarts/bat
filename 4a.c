publicinterface FixedDeposit {
double getMAmount();
void calculateInterest();
void getDetails();
}
publicclass CanaraBank implements FixedDeposit{
Scanner s = new Scanner(System.in);
String name;
double principal;
double period;
double roi = 8.5;
double interestAmt;
publicvoid getDetails()
{
System.out.println("Enter your name");
name = s.nextLine();
System.out.println("Enter the Principal amount");
principal = s.nextDouble();
System.out.println("Enter the period of deposit");
period = s.nextDouble();
}
publicvoid calculateInterest() {
interestAmt = (principal*period*roi)/100;
}
publicdouble getMAmount() {
double totalBalance;
totalBalance = principal+interestAmt;
return totalBalance;
}
}
publicclass SBI implements FixedDeposit{
Scanner s = new Scanner(System.in);
String name;
double principal;
double period;
double roi = 8.75;
double interestAmt;
publicvoid getDetails()
{
System.out.println("Enter your name");
name = s.nextLine();
System.out.println("Enter the Principal amount");
principal = s.nextDouble();
System.out.println("Enter the period of deposit");
period = s.nextDouble();
}
publicvoid calculateInterest() {
interestAmt = (principal*period*roi)/100;
}
publicdouble getMAmount() {
double totalBalance;
totalBalance = principal+interestAmt;
return totalBalance;
}
}
publicclass TestBank {
publicstaticvoid main(String[] args) {
double mAmount;
SBI s = new SBI();
CanaraBank cb = new CanaraBank();
s.getDetails();
s.calculateInterest();
mAmount = s.getMAmount();
System.out.println("Dear "+s.name+" your Maturity Amount in SBI Bank is
"+mAmount);
cb.getDetails();
cb.calculateInterest();
mAmount = cb.getMAmount();
System.out.println("Dear "+s.name+" your Maturity Amount in Canara Bank is
"+mAmount);
}
}
