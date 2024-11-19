#include <iostream>
#include <windows.h>
using namespace std;

class Animal {
    string name, sp, continent, kg;

public:
    Animal(string nm, string s, string cont, string k)
        : name(nm), sp(s), continent(cont), kg(k) {
    }

    void Print() {
        cout << name << "\t" << sp << "\t" << continent << "\t" << kg << endl;
    }
};

class Orangutan : public Animal {
public:
    Orangutan(string nm, string s, string cont, string k)
        : Animal(nm, s, cont, k) {
    }

    void Eat() { cout << "��� ������\n"; }
    void Sound() { cout << "����� �����\n"; }
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Orangutan obj("����������", "������", "����", "50 ��");
    obj.Print();
    obj.Eat();
    obj.Sound();

    return 0;
}
