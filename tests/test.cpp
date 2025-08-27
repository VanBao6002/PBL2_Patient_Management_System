#include<iostream>
#include"../include/person.h"
using namespace std;
class Gay : public Person{
    public:
      int count;
      bool isGay;
      bool hiv;

      Gay() : Person(), count(0), isGay(false), hiv(false) {}
      void displayInfo() const override {
    cout << "Name: " << name 
         << ", Gender: " << gender 
         << ", Birthday: " 
         << birthday.day << "/" 
         << birthday.month << "/" 
         << birthday.year
         << ", ID: " << ID << endl;
    cout << "Count: " << count
         << ", isGay: " << isGay
         << ", HIV: " << hiv << endl;
}

};
int main() {
    Gay g;
    g.setName("Alice");
    g.setGender('F');
    g.setID(1);
    g.count = 1;
    g.isGay = true;
    g.hiv = false;

    g.displayInfo();
    return 0;
}