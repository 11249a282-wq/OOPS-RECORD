#include<iostream>
using namespace std;
class patient {
    public:
    int patientID;
    string name;
    string disease;
    void setpatient(int id,string n,string d)
    {
        patientID=id;
        name=n;
        disease=d;
    }
    void setpatient();
};
void patient::setpatient() {
    cout<<"patientID:"<<patientID
    <<"disease:"<<disease<<endl;
    int main() {
        patient p1.p2;
        p1.setpatient(301,"arjun:,fever);")
    }
}

    
    


