//This is mine own work. Jaydon Goodrich CS 1410
/* This project was an introduction to classes. This project was used to create a class title employee and pull private data
members through public member functions. The output was a printed check with the employees information and check amount*/
#include <string>
using namespace std;

class Employee{
   public:
   Employee(int empNum, string name, string address, string phone, double hourlyWage, double hoursWorked);
   int getEmployeeNumber() const;
   const std::string& getName() const;
   const std::string& getAddr() const;
   const std::string& getPhone() const;
   double getHourlyWage() const;
   double getHoursWorked() const;
   void setName(const std::string& name);
   void setAddr(const std::string& address);
   void setPhone(const std::string& phone);
   void setHourlyWage(double wage);
   void setHoursWorked(double hours);
   double calcPay() const;
   void printCheck() const;
   
   private:
   int empNum;
   string name;
   string address;
   string phone;
   double hourlyWage;
   double hoursWorked;
};
