// This is an ATM programme
#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

void showbalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
   double balance = 0;
   int choice = 0;

   do
   {
      cout << "\n******************\n";
      cout << "Enter your choice\n";
      cout << "\n******************\n";
      cout << "1. Show Balance\n";
      cout << "2. Deposit Money\n";
      cout << "3. Withdraw Money\n";
      cout << "4. EXIT\n";
      cout << "Enter choice: ";

      if (!(cin >> choice))
      {
         cin.clear();
         cin.ignore(numeric_limits<streamsize>::max(), '\n');

         cout << "Invalid input! Please enter a number.\n";
         continue;
      }

      switch (choice)
      {
      case 1:
         showbalance(balance);
         break;

      case 2:
         balance = balance + deposit();
         showbalance(balance);
         cout << "you deposited " << balance << "\n";
         break;

      case 3:
         balance = balance - withdraw(balance);
         showbalance(balance);

         break;

      case 4:
         cout << "THANKS FOR VISITING\n";
         break;

      default:
         cout << "INVALID CHOICE\n";
      }

   } while (choice != 4);

   return 0;
}

void showbalance(double balance)
{
   cout << "Your Balance is: Rs."
        << setprecision(2) << fixed << balance << "\n";
}

double deposit()
{
   double amount;

   cout << "Enter the amount to deposit: ";

   if (!(cin >> amount))
   {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "Invalid input! Please enter a number.\n";
      return 0;
   }

   if (amount > 0)
   {
      return amount;
   }
   else
   {
      cout << "Not Valid\n";
      return 0;
   }
}

double withdraw(double balance)
{
   double amount;

   cout << "Enter the amount to withdraw: ";

   if (!(cin >> amount))
   {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "Invalid input! Please enter a number.\n";
      return 0;
   }

   if (amount > balance)
   {
      cout << "Not Enough Balance\n";
      return 0;
   }
   else if (amount < 0)
   {
      cout << "Not Valid, Please Enter a valid number\n";
      return 0;
   }
   else
   {
      cout << " You withdraw " << amount << "Rs." <<"\n";
      return amount;
   }
}
