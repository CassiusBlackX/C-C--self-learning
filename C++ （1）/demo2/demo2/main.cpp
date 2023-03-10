//
//  main.cpp
//  demo2
//
//  Created by 张奥琳 on 2022/9/10.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    using std::cout;
    using std::endl;
    int a =11;
    int b=3;
    int c;
    c=a%b;
    cout<<"a%b="<<c<<endl;
    //++ 递增运算符 -- 递减运算符
    a++;
    ++b;
    cout<<"a++:"<<a<<endl;
    cout<<"b++:"<<b<<endl;
    //a:12, b:4
    int mod_a=a++;//先给了a，然后a再进行+1的操作
    int mod_b=++b;//b先进行+1的操作，然后再给mod_b
    cout<<"mod_a:"<<mod_a<<endl;
    cout<<"mod_b:"<<mod_b<<endl;
    cout<<"b:"<<b<<endl;
    cout<<"a:"<<a<<endl;
    //a:13,b:5,c:2
    //关系运算符
    bool d=a<b;//false 就是0
    cout<<"a<b:"<<d<<endl;
    //与&& 或｜｜ 非！
    cout<<"((a<b)&&(a>c))"<<((a<b)&&(a>c))<<endl;
    
    
    
    return 0;
}
