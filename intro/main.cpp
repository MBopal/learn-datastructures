#include <iostream>
#include <vector>

// create a simple function to calculate the area of a rectangle
double calculateArea(double length, double width) { return length * width; }

int main() {
  int age = 20;          // Integer (whole numbers)
  double price = 19.99;  // Floating-point (decimals)
  char grade = 'A';      // Single character (uses single quotes)
  bool isCoding = true;  // Boolean (true/false)
  std::cout << "Age: " << age << std::endl;
  std::cout << "Price: $" << price << std::endl;
  std::cout << "Grade: " << grade << std::endl;
  std::cout << "Is coding fun? " << isCoding << std::endl;
  std::cout << "Size of int: " << sizeof(age) << " bytes" << std::endl;

  // Demonstrating type casting
  double priceAsInt = static_cast<int>(price);  // Casting double to int
  std::cout << "Price as integer: " << priceAsInt << std::endl;

  // Demonstrating type conversion
  int ageAsDouble = static_cast<double>(age);  // Casting int to double
  std::cout << "Age as double: " << ageAsDouble << std::endl;

  // if-else statement
  if (age >= 18) {
    std::cout << "You are an adult." << std::endl;
  } else {
    std::cout << "You are a minor." << std::endl;
  }

  // input from user
  std::cout << "Enter your name: ";
  std::string name;
  std::getline(std::cin, name);  // Using getline to read a full line
  std::cout << "Hello, " << name << "!" << std::endl;

  // for loop
  std::cout << "Counting from 1 to 5:" << std::endl;
  for (int i = 1; i <= 5; ++i) {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  // while loop
  std::cout << "Counting down from 5 to 1:" << std::endl;
  int count = 5;
  while (count > 0) {
    std::cout << count << " ";
    --count;
  }
  std::cout << std::endl;

  // Demonstrating a simple function
  auto add = [](int a, int b) -> int { return a + b; };
  int sum = add(5, 10);
  std::cout << "Sum of 5 and 10 is: " << sum << std::endl;

  // Demonstrating a simple function to calculate area
  double length = 5.0;
  double width = 3.0;
  double area = calculateArea(length, width);
  std::cout << "Area of rectangle (length: " << length << ", width: " << width
            << ") is: " << area << std::endl;

  // array demonstration
  int numbers[5] = {1, 2, 3, 4, 5};
  std::cout << "Array elements: ";
  for (int i = 0; i < 5; ++i) {
    std::cout << numbers[i] << " ";
  }
  std::cout << std::endl;

  // Demonstrating a simple struct
  struct Person {
    std::string name;
    int age;
  };
  Person person1 = {"Alice", 30};
  std::cout << "Person's name: " << person1.name << ", Age: " << person1.age
            << std::endl;

  // vector demonstration
  std::vector<int> vec = {10, 20, 30, 40, 50};
  std::cout << "Vector elements: ";
  for (const auto& num : vec) {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  return 0;
}
