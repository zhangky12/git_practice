//
//  main.cpp
//  Dynamic_cast
//
//  Created by kunyang zhang on 9/11/20.
//  Copyright © 2020 kunyang zhang. All rights reserved.
//

#include <iostream>
using namespace std;

struct Base {
    virtual ~Base(){};
};
struct Derived : Base { };

int main(int argc, const char * argv[]) {
    // insert code here...
    Derived d;
    Base *b = &d;
    
    if(Derived* de = dynamic_cast<Derived*>(b)){
        cout << "Cast succeed!" << endl;
    }else{
        cout << "Cast failed!" << endl;
        if(Derived* de2 = (Derived*) b){
            cout << "However, regular derive works!" << endl;
        }
    }
    
    return 0;
}



