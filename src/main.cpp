#include <algorithm>
#include <functional>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>

// int main() {
//     int age = 16;
//     double height = 1.43;
//     std::string name = "Ajanan";

//     if (age >= 18) {
//         std::cout << "Age is " << age;
//     } else {
//         std::cout << "My name is " << name << ". What's yours \n";
//     }

//     int i = 0;
//     while (i < 5) {
//         if (i == 0) {
//             std::cout << "\n";
//         }
//         std::cout << i;
//         i++;
//     }

//     std::cout << "loop";
//     for (int i = 0; i < 5; i++) {
//         std::cout << i << "\n";
//     }

//     return 0;
// }
// int main() {
//     for (int i = 1; i < 11; i++) {
//         std::cout << i << "\n";
//     }

//     return 0;
// }

// int main() {
//     for (int i = 2; i < 21; i += 2) {
//         std::cout << i << "\n";
//     }

//     return 0;
// }

// int main() {
//     int age;
//     age = 10;
//     std::cout << age << "\n";
//     std::cout << "Enter your age: ";
//     std::cin >> age;

//     std::cout << "you are " << age << " years old\n";

//     return 0;
// }

// int main() {
//     int number;

//     std::cout << "input a number: ";
//     std::cin >> number;

//     if (number % 2) {
//         std::cout << number << " is odd";
//     } else {
//         std::cout << number << " is even";
//     }

//     return 0;
// }

// int add(int a, int b) { return a + b; }

// void greet() { std::cout << "Hello"; }

// int main() {
//     int a;
//     int b;

//     greet();
//     greet();
//     std::cout << "Let's add two numbers.\nEnter first number: ";
//     std::cin >> a;
//     std::cout << "Enter another number: ";
//     std::cin >> b;

//     int answer = add(a, b);
//     std::cout << a << " + " << b << " = " << answer;

//     return 0;
// }

// int square(int num);

// int main() {
//     int num;
//     std::cout << "input number to square: ";
//     std::cin >> num;
//     std::cout << square(num);
//     return 0;
// }

// int square(int num) { return num * num; }

// int main() {
//     std::string name;
//     std::cout << "Enter your name: ";
//     std::cin >> name;

//     std::cout << "Hello, " << name;
//     return 0;
// }

// int main() {
//     int age;
//     std::string name;

//     std::cout << "What is your Name? ";
//     std::cin >> name;
//     std::cout << "What is your age? ";
//     std::cin >> age;

//     std::cout << name << " is " << age << " years old";

//     return 0;
// }

// int main() {
//     std::string name;

//     std::cout << "Enter fullname: ";
//     std::getline(std::cin, name);

//     std::cout << name;
//     return 0;
// }

// int main() {
//     std::vector<int> numbers = {1, 2, 3, 4, 5};

//     std::cout << numbers[0] << "\n";
//     std::cout << numbers[1] << "\n";
//     std::cout << numbers[2] << "\n";

//     numbers.push_back(6);

//     for (int n : numbers) {
//         std::cout << n << " ,";
//     }

//     std::cout << "\n";
//     std::cout << "New \n";

//     for (std::size_t i = 0; i < numbers.size(); i++) {
//         if (i == numbers.size() - 1) {
//             std::cout << numbers[i];
//         } else {
//             std::cout << numbers[i] << " ,";
//         }
//     }

//     std::cout << "\n";

//     std::cout << "Size: " << numbers.size();

//     return 0;
// }

// int main() {
//     std::vector<int> numbers = {3, 6, 9, 12};

//     for (std::size_t i = 0; i < numbers.size(); i++) {
//         std::cout << "Index " << i << ": " << numbers[i] << "\n";
//     }

//     int sum;
//     std::cout << "\n";

//     std::cout << sum;

//     return 0;
// }

// int main() {
//     std::vector<int> numbers;
//     int amount;

//     std::cout << "Enter amount";
//     std::cin >> amount;

//     int num;

//     for (int i = 0; i < amount; i++) {
//         std::cout << "You have " << amount - i
//                   << " numbers left to add. \nInput number to add next: ";
//         std::cin >> num;
//         numbers.push_back(num);
//     }

//     for (int n : numbers) {
//         std::cout << n << "  ";
//     }

//     return 0;
// }

// int main() {
//     std::vector<int> numbers = {1, 12, 42, 3, 2, 34};

//     auto it = std::max_element(numbers.begin(), numbers.end());

//     if (it != numbers.end()) {
//         std::cout << "Largest: " << *it;
//     }

//     return 0;
// }

// int main() {
//     std::vector<int> numbers = {12, 5, 19, 2, 42};

//     auto it = std::max_element(numbers.begin(), numbers.end());

//     if (it != numbers.end()) {
//         std::cout << *it;
//     }

//     auto FINDit = std::find(numbers.begin(), numbers.end(), 139);

//     if (FINDit != numbers.end()) {
//         std::cout << *FINDit;
//     } else {
//         std::cout << "could not find the number";
//     }

//     std::sort(numbers.begin(), numbers.end());

//     for (int n : numbers) {
//         std::cout << n << "  ";
//     }

//     return 0;
// }

// int main() {
//     std::vector<int> numbers = {12, 5, 19, 2, 42};

//     std::sort(numbers.begin(), numbers.end());

//     for (int n : numbers) {
//         std::cout << n << "  ";
//     }

//     std::sort(numbers.begin(), numbers.end(), std::greater<int>());

//     for (int i = 0; i < 2; i++) {
//         std::cout << "\n";
//     }

//     for (int n : numbers) {
//         std::cout << n << "  ";
//     }

//     return 0;
// }

// int main() {
//     std::vector<int> numbers = {1, 4, 3, 423, 42, 64, 76};

//     std::sort(numbers.begin(), numbers.end(),
//               [](int a, int b) { return a > b; });

//     for (int n : numbers) {
//         std::cout << n << " ";
//     }
// }

// int main() {
//     std::vector<int> numbers = {4, 53, 2, 12, 32, 124};

//     auto it = std::find_if(numbers.begin(), numbers.end(),
//                            [](int n) { return n > 10; });

//     if (it != numbers.end()) {
//         std::cout << "First number that is over 10: " << *it;
//     }

//     return 0;
// }

// int main() {
//     std::vector<int> numbers = {1, 23, 4231, 2342, 23, 421, 34};

//     auto it = std::find_if(numbers.begin(), numbers.end(),
//                            [](int n) { return n > 10; });

//     if (it != numbers.end()) {
//         std::cout << "return " << *it;
//     }
// }

// int main() {
//     std::vector<int> numbers = {123, 23, 32, 32, 34, 2, 1, 321, 31};

//     std::vector<int>::difference_type count = std::count_if(
//         numbers.begin(), numbers.end(), [](int n) { return n > 32; });

//     std::cout << count;

//     return 0;
// }

// int main() {
//     std::vector<int> numbers = {2, 4, 5, 6, 7, 8, 9};

//     bool hasOdd = std::any_of(numbers.begin(), numbers.end(),
//                               [](int n) { return n % 2 != 0; });

//     std::cout << hasOdd << "\n";
//     std::cout << std::boolalpha << hasOdd;
//     std::cout << "hello " << hasOdd;
//     std::cout << "\n" << "\n";
//     std::cout << std::boolalpha << 0 << "\n";
//     std::cout << std::boolalpha << 1;

//     return 0;
// }

// int main() {
//     std::vector<int> numbers = {1, 2, 3, 4};
//     std::vector<int> squared(numbers.size());
//     std::vector<int> newSquared;

//     std::transform(numbers.begin(), numbers.end(), squared.begin(),
//                    [](int n) { return n * n; });

//     std::transform(squared.begin(), squared.end(),
//                    std::back_inserter(newSquared), [](int n) { return n * n;
//                    });

//     int i = 0;
//     for (int n : squared) {
//         std::cout << numbers[i] << " --> ";
//         std::cout << n << " --> " << newSquared[i] << "\n";
//         i += 1;
//     }

//     return 0;
// }

// int main() {
//     std::vector<int> numbers = {2, 3, 4, 5, 3, 234};

//     int sum = std::accumulate(numbers.begin(), numbers.end(), 0);
//     int newSum = std::accumulate(numbers.begin(), numbers.end(), 75);

//     std::cout << sum;
//     std::cout << "\n";
//     std::cout << newSum;

//     return 0;
// }

// int main() {
//     std::vector<int> numbers = {1, 23, 53, 234, 223, 12, 31};

//     std::erase_if(numbers, [](int n) { return n > 200; });

//     for (int n : numbers) {
//         std::cout << n << "\n";
//     }
/*

remove_if compacts the wanted elements and returns the new logical end of the
vector(does not actually change the size of the vector) {1, 3, 5, ?, ?, ?}
         ^
         newEnd

erase deletes the leftover tail and shrinks the vector

*/
//     std::cout << "\n New stuff \n";
//     numbers.erase(std::remove_if(numbers.begin(), numbers.end(),
//                                  [](int n) { return n % 2 == 0; }),
//                   numbers.end());

//     for (int n : numbers) {
//         std::cout << n << "\n";
//     }

//     return 0;
// }

// int main() {
//     std::vector<int> numbers = {1, 23, 43, 234, 234, 1, 23, 1};

//     std::cout << "Copies vs Reference \n";

//     for (int n : numbers) {
//         std::cout << n << " <-- copy of element \n";
//     }
//     std::cout << "Therefore when we do n*=2 , it doesn't modify the vector
//     \n";

//     for (int n : numbers) {
//         std::cout << n << "--> n*=2 -->";
//         n *= 2;
//         std::cout << n << "\n";
//     }

//     std::cout << "\n" << "To modify actual elements, use reference --> & \n";

//     for (int& n : numbers) {
//         n *= 4;
//     }

//     for (int n : numbers) {
//         std::cout << n << "\n";
//     }

//     std::cout << "\n" << "For read only access, without copying, use const
//     \n";

//     for (const int& n : numbers) {
//         std::cout << n;
//     }

//     std::vector<int> items;
//     for (auto item: items) COPIES
//     for (auto& item: items) WRITEABLE REFERENCE
//     for (const auto& item: items) READ-ONLY REFERERENCE

//     return 0;
// }