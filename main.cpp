#include <iostream>
#include "employee.h"
using namespace std;

int main() {
   Employee EmployeeObject1(37,"Joe Brown","123 Main St.","123-6788",10.00,45.00);
   Employee EmployeeObject2(37,"Sam Jones","45 East State","661-9000",12.50,30.00);
   cout << "Employee Name: " << EmployeeObject1.getName() << endl;
   cout << "Employee Number: " << EmployeeObject1.getEmployeeNumber() << endl;
   cout << "Address: " << EmployeeObject1.getAddr() << endl;
   cout << "Phone: " << EmployeeObject1.getPhone() << endl;
   cout << endl;
   cout << endl;
   EmployeeObject1.printCheck();
   cout << "Employee Name: " << EmployeeObject2.getName() << endl;
   cout << "Employee Number: " << EmployeeObject2.getEmployeeNumber() << endl;
   cout << "Address: " << EmployeeObject2.getAddr() << endl;
   cout << "Phone: " << EmployeeObject2.getPhone() << endl;
   cout << endl;
   cout << endl;
   EmployeeObject2.printCheck();
}
