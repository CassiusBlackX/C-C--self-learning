//
//  main.cpp
//  demo3
//
//  Created by 张奥琳 on 2022/9/10.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using std::cout;
    using std::endl;
    using std::cin;
    
   /* int x;
    cout<<"please input an integer:"<<endl;
    cin>>x;*/
   /* if(x>10)
        cout<<"x is greater than 10."<<endl;//因为是单行语句，所以不一定需要加大括号。如果是多行语句就需要加大括号
    else
        cout<<"x is less than or equal to 10."<<endl;
    */
     /* if(x>10){
     cout<<"x is greater than 10."<<endl;
     }
 else{
     cout<<"x is less than or equal to 10."<<endl;
     }
 */
    //如果有多个条件需要判断的话，可以改成else if（）
   /* if(x>10){
        cout<<"x is greater than 10."<<endl;
    }
    else if(x<5){
        cout<<"x is less than 10."<<endl;
    }
    else{
        cout<<"x is between 5 and 10."<<endl;
    }*/
    //可以继续进行嵌套
   /* if(x>10){
        cout<<"x is greater than 10."<<endl;
        if(x==15){//不能使用赋值运算符“=”，不然的话如果赋值不是0，bool就是真，这条指令就废了
            cout<<"x is equal to 15."<<endl;
        }
    }
    else if(x<5){
        cout<<"x is less than 10."<<endl;
    }
    else{
        cout<<"x is between 5 and 10."<<endl;}
    */
    /*
    switch(x){//当需要将特定的表达式的值域一系列的常量进行比较，并相应的执行不同操作的时候需要用到。
         case 0:
            cout<<"it is Sunday"<<endl;
            break;
        case 1:
            cout<<"it is Monday"<<endl;
            break;
        case 2:
            cout<<"it is Tuesday"<<endl;
            break;
        case 3:
            cout<<"it is Wednesday"<<endl;
            break;
        case 4:
            cout<<"it is Thursday"<<endl;
            break;
        case 5:
            cout<<"it is Friday"<<endl;
            break;
        case 6:
            cout<<"it is Saturday"<<endl;
            break;//如果没有break，例如当输入数字6时候，就会输出it is Saturday 和 Wrong number两个东西了。
        default:
            cout<<"Wrong number!"<<endl;
            break;
    } */
    int x;
    do{
        cout<<"Please input an integer:"<<endl;
        cin>>x;
        if(x>10){
            cout<<"x is greater than 10."<<endl;
            if(x==15){
                cout<<"x is equal to 15."<<endl;
            }
        }
        else if(x<5){
            cout<<"x is less than 5."<<endl;
        }
        else{
            cout<<"x is between 5 and 10."<<endl;
        }
    }while (x!=0);
    //do while结构一定会执行一次循环体里面的内容，当while内部判断为false时候结束
    //while先判断再运行
    int i=1,sum=0;
    while(i<=100){
        sum=sum+i;
        i++;
    }
    cout<<"sum="<<sum<<endl;
    sum=0;
    //for(初始化循环变量的表达式；判断循环是否可以执行的表达式；改变循环变量的值的表达式){}
    for (int i=1;i<=100;i++){
        sum=sum+i;
    }
    cout<<"sun="<<sum<<endl;

    int scores[5]={67,89,65,98,86};
    int totalScores=0;
    for(int i=0;i<5;i++){
        totalScores=totalScores+scores[i];
    }
    cout<<"totalScores="<<totalScores<<endl;
    cout<<"i=="<<i<<endl;//输出的i是第一个循环里面的i的值，因为for循环中的i是局部
    
    
    return 0;
}
