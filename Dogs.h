//
//  Dogs.h
//  C++_inheritance
//
//  Created by kunyang zhang on 9/2/20.
//  Copyright © 2020 kunyang zhang. All rights reserved.
//

#ifndef Dogs_h
#define Dogs_h


#endif /* Dogs_h */

using namespace std;

class Dog{
protected:
    string name;
    
public:
    Dog(){}
    
    Dog(string n){
        name = n;
    }
    
    string getName(){
        return name;
    }
    
    virtual string print(){
        return "This is a dog\n";
    }
    
};

class UnderDog:public Dog{
private:
    int strength;
    
public:
    UnderDog(){}
    
    UnderDog(int s){
        strength = s;
    }
    
    UnderDog(int s, string n):Dog(n){
        strength = s;
    }
    
    int getStrength(){
        return strength;
    }
    
    string print(){
        return "This is Underdog\n";
    }
};

class Cat{
protected:
    int age;
    
public:
    Cat(){}
    Cat(int a){
        age = a;
    }
    
    int getAge(){
        return age;
    }
};


class CatDog: public Cat, public Dog{
    
public:
    CatDog(int a, string n): Cat(a), Dog(n){}
};

class Animal{
    
public:
    void speak(){
        cout << "I say "<< makeSound() << endl;
    }
    
    virtual string makeSound() = 0;
    
};

class Dog2 : public Animal{
private:
    string name;
public:
    string makeSound(){
        return "woof";
    }
};

class DragonCat;

class DragonDog{
    friend class DragonCat;
    
private:
    string name;
    
public:
    DragonDog(string name){
        this->name = name;
    }
    
};

class DragonCat{
private:
    string name;
public:
    void print(const DragonDog& dog){
        cout << dog.name << endl;
    }
};


