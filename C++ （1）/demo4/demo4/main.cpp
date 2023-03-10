//
//  main.cpp
//  demo4
//
//  Created by 张奥琳 on 2022/9/10.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using std::cout;
    using std::endl;
    using std::cin;
//面对输入的不是整数类型时候该怎么做
    int x;
    do{
        cout<<"please input an integer:"<<endl;
        if(cin>>x&&cin.get()=='\n'){
            if(x>10){
                cout<<"x is greater than 10."<<endl;
                if(x==15){
                    cout<<"x is qequal to 15."<<endl;
                }
            }
            else if(x<5){
                if(x==0){
                    break;
                }else{
                    cout<<"x is less than 5."<<endl;
                }
            }else{
                    cout<<"x is between 5 and 10."<<endl;
            }
        }else{
            cin.clear();
           // cin.ignore(INT.MAX,'\n');不理解这地方是干什么的
            cout<<"please input an integer!"<<endl;
        }
    }while(true);
    return 0;
}
