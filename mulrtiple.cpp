#include<iostream>
using namespace std;
class base1{
    protected:
      int a;
    public:
      void geta() {
        cout<<"enter value of a:";
        cin>>a;
      }
    };
    class base2{
        protected:
          int b;
        public:
          void getb() {
            cout<<"enter value of b:";
            cin>>b;
          }
        };
        class derived:public base1,public base2 {
            public:
            void sum() {
                cout<<"sum="<<a+b<<endl;
            }
        };
        int main(){
            derived d;
            d.geta();
            d.getb();
            d.sum();
            return 0;
        }