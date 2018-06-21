#include"helloclass.h"
#include<iostream>

using namespace std;
    helloclass::helloclass()
    {
        cout<<"I am being created!"<<endl; 
    }
    void helloclass::sayhello()
    {
        cout<<"HELLO CLASS!"<<endl;
    }
    helloclass::~helloclass()
    {
        cout<<"I am being destoryed!"<<endl;
    } 
