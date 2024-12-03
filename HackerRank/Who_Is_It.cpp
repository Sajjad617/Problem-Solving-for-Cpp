#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    int id;
    char name[101];
    char section;
    int marks;
    student(int id, char section, int marks)
    {
        this->id = id;
        this->section = section;
        this->marks = marks;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int id;
        cin >> id;
        char name[101];
        cin >> name;
        char section;
        cin >> section;
        int marks;
        cin >> marks;
        student a(id, section, marks);
        strcpy(a.name, name);

        int id_2;
        cin >> id_2;
        char name_2[101];
        cin >> name_2;
        char section_2;
        cin >> section_2;
        int marks_2;
        cin >> marks_2;
        student b(id_2, section_2, marks_2);
        strcpy(b.name, name_2);
        
        int id_3;
        cin >> id_3;
        char name_3[101];
        cin >> name_3;
        char section_3;
        cin >> section_3;
        int marks_3;
        cin >> marks_3;
        student c(id_3, section_3, marks_3);
        strcpy(c.name, name_3);

        int max_mark = max({a.marks, b.marks, c.marks});

        if (max_mark == a.marks){
            cout << a.id << " " << a.name << " " << a.section << " " << a.marks << endl;
        }

        else if (max_mark == b.marks){
            cout << b.id << " " << b.name << " " << b.section << " " << b.marks << endl;
        }
        
        else{
            cout << c.id << " " << c.name << " " << c.section << " " << c.marks << endl;
        }
    }
}