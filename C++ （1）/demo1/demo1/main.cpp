//
//  main.cpp
//  demo1
//
//  Created by 张奥琳 on 2022/9/9.
//
/*多行注释*/

#include <iostream>
#include <iomanip>//导入这个库的最初目的是因为这个库可以有保留两位小数的方法
#include<string>//用字符数组表示单词太麻烦了，因而引入该库，
//using namespace std; //最好把命名空间放到方法之内，防止混乱。这样是全局有效，会增加命名冲突的机会

int main(int argc, const char * argv[]) {   // 把这些参数删了也不会影响程序运行
//int main(){
    // insert code here...
    using std::cout;
    using std::endl;
    using std::cin;
    using std::string;
    //cout<<"Hello, World!\n"<<endl; 其中，\n与endl作用一样，可以删除\n
    // <<叫做流插入运算符。
    cout<< "Hello, World!\n";
    cout<<"step1"<< endl;
    cout<<"step2"<< endl;
    cout<<"step3"<< endl;
    //在produc--》scheme--〉edit scheme中的arguments里面添加了两个变量，abc和bcd
    /*cout<<argc<< endl;
    cout<<argv[0]<< endl;//第一个参数存储的是文件索引
    cout<<argv[1]<< endl;//第二个参数才是我们新增的参数abc
     为了尝试使用cin指令，删除了之前添加的变量*/
   // int first,second;//这里是局部变量，如果是在外面申明的就是全局变量了，不安全。也可以给变量赋予初始值，
    // int first=0,second=0
    //如果要申明常量的话，要先加const 修饰
   // const int third=20;//申明的是常量，不可以修改。
    //在定义变量名的时候，不可以使用关键字。如果有两个单词组成，建议第一个词首字母小写，第二个词首字母大写。
    //如果改变了变量的名字，每一处都必须要改变
    /*cout<<"please input the first integer:"<<endl;
    cin>>first;
    cout<<"please input the second integer:"<<endl;
    cin>>second;
    cout<<"first + second="<< first+second<<endl;
    cout<<"first + second+third="<< first+second+third<<endl;
    */
    //short int s_num=0;
    //long int l_num=0;//long 就是比short存储的整数范围更大
    //unsigned int u_num=0;//unsigned就是没有符号的整数，即只能标识正整数
    //unsigned short int us_num=0;
    //unsigned long int ul_num=0;
    //通过sizeof的命令看不同数据类型占据的内存空间有多大
    cout<<"the size of short int:"<<sizeof(short int)<<endl;
    cout<<"the size of int:"<<sizeof(int)<<endl;
    cout<<"the size of long int:"<<sizeof(long int)<<endl;
    cout<<"the size of unsigned short int:"<<sizeof(unsigned short int)<<endl;
    cout<<"the size of unsigned int:"<<sizeof(unsigned int)<<endl;
    cout<<"the size of unsigned long int:"<<sizeof(unsigned long int)<<endl;
    /*us_num=-2,3;会导致数据溢出。但是语法本身没有错误，是无法提示你这里出错的。所以这种类型的错误最需要注意
    cout<<"us_num="<<us_num<<endl; */
    //bool flag=false;
    //char char0ne='Y';
    cout<<"the size of bool:"<<sizeof(bool)<<endl;
    cout<<"the size of char:"<<sizeof(char)<<endl;
    float f_num=0.0;
    //f_num=13/7;//这种时候输出出来的结果是，因为13和7都是整型的数，这个时候输出出来的就是整数，小数部分被省略了。
    //解决方法：把其中一个弄成浮点数就可以了
    f_num=13/7.0;
    //double d_num=0.0;//占据的空间会稍微大一点
    //long double ld_num=0.0;
    cout<<"the size of float:"<<sizeof(float)<<"\t"<<"13/7="<<f_num<<endl;
    cout<<"the size of double:"<<sizeof(double)<<endl;
    cout<<"the size of long double:"<<sizeof(long double)<<endl;
    //打印出来的字节数在不同的机子上可能不一样，因为有的机器是32位的，有的是64位的
    //如果希望打印出来的是两位小数
    cout<<"13/7.0="<<std::setprecision(3)<<f_num<<endl;
    //如果有一组相同类型的数据放在一个集合里面管理，如果单独声明每一个数据会很麻烦，所以使用数组来解决
    int scores[]={23,43,98,93,87,24};//中括号是用来固定数组的长度的，不标注的话就是看后面的花括号里面有多少个
    int zeros[8]={};//数组的初始化值全部都是0，8个0.数组的索引从0开始
    cout<<"zeros[0]:"<<zeros[0]<<endl;
    cout<<"zeros[7]:"<<zeros[7]<<endl;
    cout<<"scores[2]:"<<scores[2]<<endl;
    int partial[7]={23,89};//申明了前两个数值，但是后面的都是默认为0
    cout<<"partial[0]:"<<partial[0]<<endl;
    cout<<"partial[5]:"<<partial[5]<<endl;
    //生成一个二维数组
    int class_scores[3][2]={{23,45},{78,89},{43,98}};//三行两列
    cout<<"class_scores[1][1]:"<<class_scores[1][1]<<endl;
    char word[]={'B','l','u','e'};
    cout<<"word[]:"<<word<<endl;
    cout<<"word[2]:"<<word[2]<<endl;
    
    string strName="Nini";
    string strSurname="Lee";
    cout<<strName+" "+strSurname<<endl;
    strName.append(strSurname);
    cout<<strName<<endl;
    
    //一个类型转换的约定。整数/整数，不管除出来是什么，都会保留为整数结果。
    
    return 0;
}
