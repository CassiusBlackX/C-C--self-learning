//
//  main.cpp
//  demo8
//
//  Created by 张奥琳 on 2022/9/10.
//

#include <iostream>
#include<string>

struct book{
    std::string name;
    float price;
    void addBook(std::string bookname, float bookprice){
        name=bookname;
        price=bookprice;
    }
};
union ascii{
    char ch;
    int number;
    double d;//不加这句话，size就是4，加了就变成8
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    book bookOne={"Harry Potter",23.5};
    book bookTwo={"The Little Pince",10};
    std::cout<<"The book One:"<<bookOne.name<<",$"<<bookOne.price<<std::endl;
    std::cout<<"THe book Two:"<<bookTwo.name<<",$"<<bookTwo.price<<std::endl;
    book bookThree;
    bookThree.addBook("Gone",35.4);
    ascii charA;
    charA.ch='A';
    charA.number=63;
    std::cout<<"The Letter charA:"<<charA.ch<<""<<charA.number<<std::endl;
    std::cout<<"The Size:"<<sizeof(charA)<<std::endl;

    return 0;
}
