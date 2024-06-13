#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Employee {
    string name;
    int id;
    double salary;
    int hoursWorked;
};

class PayrollSystem {
public:
    void addEmployee(Employee employee) {
        employees.push_back(employee);
    }

    void displayEmployees() {
        for (const auto& employee : employees) {
            cout << "Name: " << employee.name << endl;
            cout << "ID: " << employee.id << endl;
            cout << "Salary: $" << employee.salary << endl;
            cout << "Hours Worked: " << employee.hoursWorked << endl;
            cout << endl;
        }
    }

    void calculateTotalSalary() {
        double totalSalary = 0.0;
        for (const auto& employee : employees) {
            totalSalary += employee.salary * employee.hoursWorked;
        }
        cout << "Total Salary: $" << totalSalary << endl;
    }

private:
    vector<Employee> employees;
};

int main() {
    PayrollSystem payrollSystem;

    int numEmployees;
    cout << "Enter the number of employees: ";
    cin >> numEmployees;

    for (int i = 0; i < numEmployees; i++) {
        Employee employee;
        cout << "Enter employee " << i + 1 << "'s details:" << endl;
        cout << "Name: ";
        cin >> employee.name;
        cout << "ID: ";
        cin >> employee.id;
        cout << "Salary: $";
        cin >> employee.salary;
        cout << "Hours Worked: ";
        cin >> employee.hoursWorked;

        payrollSystem.addEmployee(employee);
    }

    payrollSystem.displayEmployees();
    payrollSystem.calculateTotalSalary();

    return 0;
}