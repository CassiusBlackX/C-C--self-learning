//
//  main.cpp
//  demo7
//
//  Created by 张奥琳 on 2022/9/10.
//

#include <iostream>
#include<string>
using namespace std;
class Book{
    private: //一般不用public
        string name;
        string author;
        int borrowed=0;
    public:
    Book(){}
    Book(string bookname, string bookauthor,int bookborrowed=0){
        name=bookname;
        author=bookauthor;
        borrowed=bookborrowed;
    }
    void setName(string bookname){
        name = bookname;
    }
    string getName(){
        return name;
    }
    void setAuthor(string bookauthor){
        name=bookauthor;
    }
    string getAuthor(){
        return author;
    }
    void setBorrowed(int bookborrowed){
        borrowed=bookborrowed;
    }
    int getBorrowed(){
        return borrowed;
    }
    void printInfo(){
        if(borrowed==1){
            cout<<"THe book's name is "<<name<<",The author is"<<author<<",THe boook's borrowed"<<endl;
        }else{
            cout<<"THe book's name is "<<name<<",The author is"<<author<<",THe boook's mine"<<endl;

        }
    }
};


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    Book mybook;
    cout<<"before:"<<mybook.getName()<<endl;
    cout<<"before:"<<mybook.getBorrowed()<<endl;

    mybook.setName("Harry Potter");
    mybook.setBorrowed(0);
    
    cout<<"before:"<<mybook.getName()<<endl;
    cout<<"before:"<<mybook.getBorrowed()<<endl;

    mybook.printInfo();
    Book hisbook("The little Prince","",1);
    hisbook.printInfo();

    return 0;
}
