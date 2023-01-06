#include <bits/stdc++.h>
using namespace std;
class student_end
{
private:
    double marks_10, marks_12;
    string f_name, l_name, name, address, age, gaurdian_name, moblie_num1, mobile_num2, g_address;

public:
    void get_marks()
    {
        cout << "Enter the 10th class marks  percentage :" << endl;
        cin >> marks_10;
        cout << "\n";
        cout << "Enter the 12th class marks in percentage :" << endl;
        cin >> marks_12;
        cout << "\n";
    }
    void get_personalinfo()
    {
        // getchar();
        cout << "Enter your first Name:" << endl;
        getline(cin, f_name);
        cout << endl;

        cout << "Enter your last Name:" << endl;
        getline(cin, l_name);
        cout << "\n";

        name = f_name + " " + l_name;

        cout << "Enter your Age" << endl;
        getline(cin, age);
        cout << "\n";

        cout << "Enter your address in formate of house-number , village/town/city name , district name , state name :" << endl;
        getline(cin, address);
        cout << "\n";

        cout << "Enter your moblie number :" << endl;
        getline(cin, moblie_num1);
        cout << "\n";

        cout << "Enter gaurdian name :" << endl;
        getline(cin, gaurdian_name);
        cout << "\n";

        cout << "Enter gaurdian address in formate of house-number , village/town/city name , district name , state name:" << endl;
        getline(cin, g_address);
        cout << "\n";

        cout << "Enter gaurdian moblie number :";
        getline(cin, mobile_num2);
        cout << "\n";
    }
    void display()
    {
        cout << name << endl;
        cout << moblie_num1 << endl;
        cout << address << endl;
        cout << gaurdian_name << endl;
        cout << mobile_num2 << endl;
    }
    friend class university_end;
};

class university_end
{
private:
public:
    bool qualification_check(student_end &t)
    {
        if (t.marks_10 > 85 && t.marks_10 <= 100)
        {
            if (t.marks_12 > 85 && t.marks_12 <= 100)
            {
                return true;
            }
            else
                return false;
        }
        else
            return false;
    }

    friend class student_end;
};

int main()
{
    student_end s;
    university_end p;
    s.get_marks();
    bool val;
    val = p.qualification_check(s);
    if (val)
    {
        s.get_personalinfo();
        s.display();
    }
    else
    {
        cout << "your previous marks are not enough to get into this college : better luck next time! " << endl;
    }
}