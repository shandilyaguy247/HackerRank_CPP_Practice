#include <iostream>
#include <string>
using namespace std;

int main() {
    struct Student{
        int age;
        string first_name;
        string last_name;
        int standard;
    };

    struct Student st;

    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;

    return 0;
}
