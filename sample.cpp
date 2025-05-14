#include <iostream>
using namespace std;

class Student {
    public:
    int num;
    int year;
    string name;
    void show();
};

void Student::show() {
    cout << "名前 :" << name << "\n";
    cout << "番号 :" << num << "\n";
    cout << "年齢 :" << year << "\n";
}

int main() {
    Student Tarou;
    Tarou.num = 10;
    Tarou.year = 11;
    Tarou.name = "太郎";
    Tarou.show();

    cout << "\n";

    Student Hanako;
    Hanako.num = 11;
    Hanako.year = 12;
    Hanako.name = "花子";
    Hanako.show();
    return 0;
}