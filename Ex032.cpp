// Define a structure named Student holding three variables Roll No, Name, Mobile Number;

#include<iostream>
using namespace std;
int main(){
    struct Student{
        int roll_no;
        string name;
        string mobile;
    };

    struct Student s1,s2,s3,s4,s5;
    s1.roll_no = 001;
    s1.name = "John";
    s1.mobile = "1234567890";

    s2.roll_no = 002;
    s2.name = "Alex";
    s2.mobile = "2345678901";

    s3.roll_no = 003;
    s3.name = "Veer";
    s3.mobile = "3456789012";

    s4.roll_no = 004;
    s4.name = "Vijay";
    s4.mobile = "4567890123";

    s5.roll_no = 005;
    s5.name = "Ajay";
    s5.mobile = "5678901234";

    cout<<"Details of Student 1: \n"<<s1.roll_no<<endl<<s1.name<<endl<<s1.mobile<<endl<<endl;
    cout<<"Details of Student 2: \n"<<s2.roll_no<<endl<<s2.name<<endl<<s2.mobile<<endl<<endl;
    cout<<"Details of Student 3: \n"<<s3.roll_no<<endl<<s3.name<<endl<<s3.mobile<<endl<<endl;
    cout<<"Details of Student 4: \n"<<s4.roll_no<<endl<<s4.name<<endl<<s4.mobile<<endl<<endl;
    cout<<"Details of Student 5: \n"<<s5.roll_no<<endl<<s5.name<<endl<<s5.mobile<<endl<<endl;
    return 0;
}
