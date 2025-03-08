#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    Person(std::string n, int a) : name(std::move(n)), age(a) {}

    const std::string& GetName() const { return name; }
    int GetAge() const { return age; }

    void PrintInfo() const {
        std::cout << "Name: " << name << "\nAge: " << age << '\n';
    }
};

int main() {
    Person p("Ali", 25);
    p.PrintInfo();
    return 0;
}
