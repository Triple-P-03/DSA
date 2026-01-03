#include <bits/stdc++.h>
using namespace std;

// Define a class
class Hero {
private:   // encapsulation: data hidden from outside
    int health;
    string name;

public:
    // Constructor
    Hero(string n, int h) {
        name = n;
        health = h;
        cout << "Hero created: " << name << " with health " << health << endl;
    }

    // Method to display hero info
    void display() {
        cout << "Name: " << name << ", Health: " << health << endl;
    }

    // Method to update health
    void takeDamage(int damage) {
        health -= damage;
        cout << name << " took " << damage << " damage!" << endl;
    }
};

int main() {
    // Create objects (instances of Hero)
    Hero h1("Ironman", 100);
    Hero h2("Spiderman", 80);

    // Use methods
    h1.display();
    h2.display();

    h1.takeDamage(30);
    h1.display();

    return 0;
}