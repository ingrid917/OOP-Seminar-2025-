//
// Created by Matei Ingrid on 06.03.2025.
//private: mecanisme care definesc starea si comportamentul unui obiect
//directive de accest: definesc cum ajunfgem la datele si metodele obiectului


#include <iostream>
using namespace std;


class Dog {

private:
  int age;


public:

  bool eat() {
    cout<<"Dog is eating";
    return true;
  }

  int get_age() {
    return age;
  }

  void set_age(int number) {
    age = number;
  }

};


int main(){
  Dog dog = Dog();
  dog.eat();
  //dog.age = 1;
  dog.set_age(22);
  cout<<dog.get_age();
  return 0;
}
