#include <bits/stdc++.h>
using namespace std;
class emp
{
private:
    int age;
    int height;
    string name;

public:
    emp(int age, int height, string name = "cat")
    {
        this->age = age;
        this->height = height;
        this->name = name;
    }
    int getAge()
    {
        return age;
    }

    void print()
    {
        cout << "the name , age and number\n"
             << name << "\t" << age << "\t" << height << endl;
    }
    void check()
    {
        while (true)
        {
            int i= 0;
            cout << i++ << endl;
        }
    }
};

int main()
{
    emp e1(12, 178, "tom");
    e1.print();

    return 0;
}