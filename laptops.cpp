#include<iostream>
using namespace std;
class book {
    public:
    string title;
    string author;
    float price;
    void display() {
        cout<<"title:"<<title
        <<"author:"<<author
        <<"price:"<<price<<endl;
    }
};
int main() {
    book b1, b2;
    b1.title="c++:";
    b1.author="bjane:";
    b1.price=750.50 ;
    b2.title="data structers:";
    b2.author="mark:";
    b2.price=600.75;b1.display();b2.display();

    return 0;
}


    

