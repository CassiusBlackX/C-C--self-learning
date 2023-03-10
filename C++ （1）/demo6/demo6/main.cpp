
//
//  main.cpp
//  demo6
//
//  Created by 张奥琳 on 2022/9/10.
//

#include <iostream>
int total(int a,int b);
void total(int a, int b, int& sum);
int main(int argc, const char * argv[]) {
    // insert code here...
    int*myPointer=NULL;
    int number_A=7;
    myPointer=&number_A;
    
    std::cout << "myPointer points to value:"<<*myPointer<<std::endl;
    
    int number_B=*myPointer;
    std::cout << "number_A ="<<number_A<<std::endl;
    std::cout << "number_B ="<<number_B<<std::endl;

    *myPointer=10;
    std::cout << "number_A ="<<number_A<<std::endl;
    std::cout << "number_B ="<<number_B<<std::endl;
//a变了，b没有变。因为mypointer指向的是a这个变量，当新的值的时候，指针所指向的a就发生了变化，b只是赋予了当时mypoint的值的，所以不会变
    std::cout << "&number_A ="<<&number_A<<std::endl;
    std::cout << "&number_B ="<<&number_B<<std::endl;//&变量名称  去获取内存地址
    std::cout << "myPointer ="<<myPointer<<std::endl;

    int numbers[3]={4,9,25};
    int *pointToArr=numbers;
    std::cout<<"*pointToArr="<<*pointToArr<<std::endl;
    for(int i=0;i<3;i++){
        std::cout<<"*pointToArr="<<*(pointToArr++)<<std::endl;
    }
    int&ref_number_A=number_A;
    int&ref_number_B=number_B;
    std::cout << "ref_number_A="<<ref_number_A<<std::endl;
    std::cout << "ref_number_B="<<ref_number_B<<std::endl;
    number_B=100;
    std::cout << "ref_number_B="<<ref_number_B<<std::endl;
//申明引用的时候就是给变量又取了一个名字，改变任意一个名字的值的时候，另外一个名字也会跟着改变值
    /*int sum=total(6,8);
    std::cout<<"sum="<<sum<<std::endl;*/
    int sum=0;
    total(2,9,sum);
    std::cout<<"sum="<<sum<<std::endl;
    
    
    
    return 0;
}
int total(int a,int b){
    return a+b;
}
void total(int a, int b, int& sum){
    sum=a+b;
    
}

