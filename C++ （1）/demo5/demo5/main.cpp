//
//  main.cpp
//  demo4
//
//  Created by 张奥琳 on 2022/9/10.
//

#include <iostream>
void printSeperateLine();
void printSeparateLine(int l, char c);
using std::string;
string uppercase_A(string str);
int main(int argc, const char * argv[]) {
    using std::cout;
    using std::endl;
    using std::cin;

    int x;
    string str_old,str_new;
    cout<<"pleas input a string:"<<endl;
    std::getline(cin,str_old);
    str_new=uppercase_A(str_old);
    cout<<"str_new:"<<str_new<<endl;
    cout<<"str_old:"<<str_old<<endl;
    
    srand((int)time(0));
    //cout<<rand()%100+1<<endl;
    int randomInt = rand()%100+1;
    cout<<"A random integer (1 too 100) has been created"<<endl;
    printSeparateLine(20,'*');//这里没有成功
    do{
        cout<<"please guess the number:"<<endl;
        if(cin>>x&&cin.get()=='\n'){
            if(x==randomInt){
                cout<<"That's right! The number is"<<x<<endl;
                break;
            }else{
                if(x<randomInt){
                    cout<<"the random number is higher."<<endl;
                }else{
                    cout<<"the random number is lower."<<endl;
                }
            }
        }else{
            cin.clear();
            cin.ignore(INT_MAX,'\n');//不理解这地方是干什么的
            cout<<"please input an integer!"<<endl;
        }
        printSeperateLine();
    }while(true);
    return 0;
}

void printSeperateLine(){
    std::cout<<"____"<<std::endl;//函数必须要在使用之前进行申明
}

void printSeparateLine(int l, char c){
    for(int i=0;i<1;i++){
        if(i==l-1){
            std::cout<<c<<std::endl;
        }else{
            std::cout<<c;
        }
    }
}


string uppercase_A(string str){
    for(int i=0;i<str.length();i++){
        if(str[i]=='a'){
            str[i]='A';
        }
    }
    return str;
}
