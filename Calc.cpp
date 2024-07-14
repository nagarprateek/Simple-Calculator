#include <iostream>
#include <string>
#include <sstream>


double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

int main() {
    std::string input;
    double num1, num2;
    char operation;
    bool continueCalc = true;

    while (continueCalc) {
        
        std::cout << "Enter calculation (e.g., 5+2, 6x3): ";
        std::cin >> input;

       
        std::istringstream iss(input);
        iss >> num1 >> operation >> num2;

     
        switch (operation) {
            case '+':
                std::cout << "Result: " << add(num1, num2) << std::endl;
                break;
            case '-':
                std::cout << "Result: " << subtract(num1, num2) << std::endl;
                break;
            case 'x':
                std::cout << "Result: " << multiply(num1, num2) << std::endl;
                break;
            case '/':
                if (num2 != 0) {
                    std::cout << "Result: " << divide(num1, num2) << std::endl;
                } else {
                    std::cout << "Error: Division by zero!" << std::endl;
                }
                break;
            default:
                std::cout << "Error: Invalid operator!" << std::endl;
                break;
        }

        
        char choice;
        std::cout << "Do you want to perform another calculation? (y/n): ";
        std::cin >> choice;
        if (choice != 'y' && choice != 'Y') {
            continueCalc = false;
        }
    }

    std::cout << "Thank you for using the calculator!" << std::endl;
    return 0;
}


