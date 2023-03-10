//
//  main.c
//  001
//
//  Created by 张奥琳 on 2022/9/18.
//

#include <stdio.h>
//std，标准 i，input，o，output
/*int main(int argc, const char * argv[]) { //主函数-程序的入口-main函数有且仅有一个
    //int是整型的意思
    //main前面的int表示main函数调用返回一个整型值
    //库函数- C语言本身提供给我们使用的函数
    //#include 包含一个叫stdio.h的文件
   
    printf("Hello, World!\n");
    
    return 0;
}*/
//char-字符类型
/*
 int num2=20;//全局变量-定义在{}代码块之外的变量
int a=100;
int main()
{
    char ch='A';//内存
    printf("%c\n",ch);//%c--打印字符格式的数据
    int age=20;
    printf("%d\n",age);//%d--打印整型十进制数据
    //%f-打印浮点数字-打小数
    //%p-以地址的形式打印
    //%x-打印16进制数字
    float f=5.0;
    printf("%f\n",f);
    double d=3.14;
    printf("%lf\n",d);
    printf("%d\n",sizeof(char));//1
    printf("%d\n",sizeof(short));//2
    printf("%d\n",sizeof(int));//4
    printf("%d\n",sizeof(long));//8
    printf("%d\n",sizeof(long long));//8
    printf("%d\n",sizeof(float));//4
    printf("%d\n",sizeof(double));//8
    short age2=20;//向内存申请两个字节=16bit位，用来存放20
    float weight=95.6f;//向内存申请4个字节，存放小数
    int num=10;//局部变量-定义在代买块内部的变量
    int a=10;
    printf("%d\n",a);//局部变量和全局变量的名字建议不要相同-容易误导，产生bug
    //当局部变量和全局变量的名字相同时，局部变量优先
    //局部变量只能在定义所在的代码块内使用
    return 0;
}
*/
//变量的作用域和生命周期 局部变量的作用域是变量所在局部范围。全局变量的作用域是整个工程。
int main()
{
    //计算两个数的个
    int num1=0;
    int num2=0;
    int sum=0;

    //输入数据-使用输入函数scanf
    scanf("%d%d",&num1,&num2);//取地址符号&
    //C语言语法规定，变量要定义在当前代码块最前面。。但是Xcode里面不这样也不报错，可以正常运行
    sum=num1+num2;
    printf("sum=%d\n",sum);
    extern int g_val;
    printf("g_val=%d",g_val);
    return 0;
}
