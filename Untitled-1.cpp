#include<iostream>
#include<string>
using namespace std;
class Student {
    public:
    string name;
    int age;
    void play () {
        cin >> name;
        cin >> age;
    }
    void display (){
        cout << "Name is: "<<name;
        cout <<"Age: "<< age;
    }
};
int main () {
    Student s;
    s.play();
    s.display();
    return 0;
}