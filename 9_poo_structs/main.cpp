#include <iostream>

using namespace std;

struct Student {
        string name;
        int code;
        int age;
        Student() { // default constructor
            name = "";
            code = 0;
            age = 0;
        }
};

int main()
{
    Student st;
    st.name = "Juan";
    st.age = 19;
    st.code = 454545;

    cout << st.name << endl;
    cout << st.age << endl;
    cout << st.code << endl;

    Student st1;
    cout << st1.name << endl;
    cout << st1.age << endl;
    cout << st1.code << endl;
    return 0;
}
