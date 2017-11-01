//
//  main.cpp
//  27-继承和派生
//
//  Created by 黄启明 on 2017/9/15.
//  Copyright © 2017年 Himin. All rights reserved.
//

#include <iostream>


using namespace std;

class People {
public:
    int age;
    char *name;
public:
    People() {
        age = 0;
        name = new char[10];
        strcpy(name, "himin");
        cout << "People" << endl;
    }
    
    People(People &p) {
        age = p.age;
        name = new char[10];
        strcpy(name, p.name);
        cout << "People copy" << endl;
    }
    
    virtual ~People() {
//        delete []name;
        cout << "~People" << endl;
    }
    
//    virtual void show() {
//        cout << "name: " << name << ",age: " << age << endl;
//    }
    virtual void show() {
        cout << "name: " << name << ",age: " << age << endl;
    }
};

class Student: public People {
public:
    int sno;
public:
    Student() {
        sno = 3110;
        cout << "Student" << endl;
    }
    
    ~Student() {
        cout << "~Student" << endl;
    }
    void show() {
        cout << "sno: " << sno << endl;
    }
};

int main(int argc, const char * argv[]) {

    //1  派生类的对象赋值给基类对象 注意：此时通过基类调用虚函数并不调用派生类的虚函数，并没有实现多态性 多态性的实现是通过基类的指针或引用实现的
//    Student s;
//    People p = s;
//    p.show();
//    cout << "hello: " << p.name << endl;
    
    //2 派生类对象的地址赋值给基类的指针
//    Student s;
//    People *p = &s;
//    p->show();
//    s.show();
//    cout << "hello: " << p->name << endl;
    
    //3 派生类对象初始化基类的引用
//    Student s;
//    People &p = s;
//    p.show();
//    cout << "hello: " << p.name << endl;
    
    //以下为测试
    //2 如果此时父类的析构函数没有加virtual Student的析构函数不会调用
    People *p = new Student();
//    p->show();
//    cout << "hello: " << p->name << endl;
    delete p;

    //如果在父类的构造函数和析构函数中存在动态分配存储空间和内存释放 则会出现内存释放错误
//    People p;
//    p = Student(); //使用临时对象赋值
//    p.show();
//    cout << "hello: " << p.name << endl;
//    const People p = Student;
    
    //存在拷贝构造函数时报错 No matching constructor for initialization of 'People'
//    People p = Student();
    
    return 0;
}
