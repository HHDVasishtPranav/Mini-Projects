//AP21110010363//AP21110010364//AP21110010365//AP21110010366
//Rajiv//Vasisht//Yashasree//Saivenkat
#include <bits/stdc++.h>
#include<iomanip>
using namespace std;
fstream file;
fstream que_file;
ifstream out;
class student_end;
class university_end;
int flag=0;

fstream output;
class student_end
{

public:
    double marks_10, marks_12, entranceExam;
    string name, address, age, gaurdian_name, moblie_num1, mobile_num2, guardian_Address, gmail;
    int course_choice;
    void getMarks()
    {
        cout << "\nEnter the 10th class marks  percentage : ";
        cin >> marks_10;
        cout << "\nEnter the 12th class marks in percentage : ";
        cin >> marks_12;
        cout << "\nEnter marks secured in the entrance exam : ";
        cin >> entranceExam;
        cout << endl;
    }

    void getPersonalInfo()
    {

        getchar();
        cout << "\nEnter your Name: ";
        getline(cin, name);

        cout << "\nEnter your Age : ";
        getline(cin, age);

        cout << "\nEnter your address in formate of house-number , village/town/city name , district name , state name : ";
        getline(cin, address);

        cout << "\nEnter your moblie number : ";
        getline(cin, moblie_num1);

        cout << "\nEnter your mail id :";
        getline(cin, gmail);

        cout << "\nEnter gaurdian name : ";
        getline(cin, gaurdian_name);

        cout << "\nEnter gaurdian address in formate of house-number , village/town/city name , district name , state name: ";
        getline(cin, guardian_Address);

        cout << "\nEnter gaurdian moblie number :";
        getline(cin, mobile_num2);
    }

    void getInfoCourse()
    {
        //getchar();
        cout << "\nEnter the courses you want to take for this semester : \nyour are eligible for \n1)(CSE)COMPUTER SCIENCE ENGNEERING \n2)(ECE)ELECTRONICS COMMUNICATION ENGINEERING\n3)(EEE)ELECTRICAL AND ELECTRONICS ENGNEERING \n4)MECHANICAL ENGINEERING \n5)CIVIL ENGNEERING  \n";
        cout<<"\nEnter your choice : ";
        cin>>course_choice;
    }

    void display()
    {
        cout << "Check the details " << endl;
        cout << name << endl;
        cout << moblie_num1 << endl;
        cout << address << endl;
        cout << gmail << endl;
        cout << gaurdian_name << endl;
        cout << mobile_num2 << endl;
    }

    void intofile(string course)
    {
       file.open("student detailes.txt", ios::out | ios::app);
       file<<left<<setw(20)<<name<<left<<setw(25)<<moblie_num1<<left<<setw(20)<<course<<left<<setw(35)<<gmail<<left<<setw(35)<<address<<left<<setw(25)<<gaurdian_name<<endl;
       file.close();
    }
    int fee_de(string ptr)
    {if(ptr=="CSE")
        {
            course_choice=1;
        }
        else if(ptr=="ECE")
        {
              course_choice=2;
        }
        else if(ptr=="EEE")
        {
            course_choice=3;
        }
        else if(ptr=="MECHANICAL")
        {
           course_choice=4;
        }
        else{
           course_choice=5;
        }
        switch(course_choice)
        {
        case 1:
        return 300000;
        break;
        case 2:
        return 250000;
        break;
        case 3:
        return 200000;
        break;
        case 4:
        return 200000;
        break;
        case 5:
        return 200000;
        break;
        }
    }
    friend class university_end;

};




class university_end : public student_end
{
private:
public:
    string user = "group10";
    string pw = "c++";
    string user_name;
    string password;
    bool qualification_check(student_end &t)
    {
        if (t.marks_10 > 40 && t.marks_12 > 40)
        {

            if (t.entranceExam > 85 && t.entranceExam <= 100)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    string course_select()
    {getInfoCourse();
        
        pos_err_course:
        switch(course_choice)
        {
            
            case 1:
            return "CSE";
            break;
            case 2:
            return "ECE";
            break;
            case 3:
            return "EEE";
            break;
            case 4:
            return "MECHANICAL";
            break;
            case 5:
            return "CIVIL";
            break;
            default : cout<<"\n you have choosen the incorrect key :";
            getInfoCourse();
            goto pos_err_course;
            break;

        }
    }
    bool password_check() //to check username and password are correct or not
    {
        cout << "\nEnter your user name : ";
        cin >> user_name;
        cout << "\nEnter your password : ";
        cin >> password;
        if (user_name == user && pw == password)
        {
            return true;
        }
        else
        {
            cout << "\nYour have entred invalid username or password!!!";
            return false;
        }
    }
    void faq_answers(int ptr)
    {string que;
        switch(ptr)
        {
            case 1:
            cout<<"\nA candidate is required to meet eligibility criteria for their respective intrested programme which is available in the website.";
            break;
            case 2:
            cout<<"\nUniversity offers various undergraduate, post graduate and doctorial programme in various disciplines .  ";
            break;
            case 3:
            cout<<"\nUniversity academic sessions begins in the second half of August .The sessions comprises of two semester of six month August and december and januvary to may .";
            break;
            case 4:
            cout<<"\nYes , Any scholarships that are to be obtained will be approved by the scholarship commitee .";
            break;
            case 5:
            cout<<"\nAfter document verification ,by paying the 1st semester fee .";
            break;
            case 6:
            cout<<"\nCurrently it is 10:1 .";
            break;
            case 7:
            cout<<"\nStudents can choose from a wide variety of sporting options like cricket, football, volleyball, throwball, basketball, table tennis, foosball and much more.";
            break;
            case 8:
            cout<<"\nThere is a strong emphasis on making the student well rounded here at SRM Andhra Pradesh. With this in mind, several Clubs & Societies have been formed such as Innovation Society, Robotics Society, Literary Society, Music Club, Photography Club,  Gaming Club and Coding Society .";
            break;
            case 9:
            cout<<"\nWe have daily college buses plying in from Vijayawada and Guntur. Day scholars can choose to avail these services. We also have a pickup and drop facility for students on weekends for day trip to markets.";
            break;
            case 10:
            cout<<"\ntudents / Parents can visit the campus on any working day between 9 AM - 6 PM.";
            break;
            case 11:
            cout<<"\nA student will be awarded a Degree in a Major if he / she earns a minimum of 180 credits and satisfies all requirements for the award of the degree as per the University regulations. The student can choose courses across the departmental electives and open electives of his / her choice to complete the 180 credit requirement.";
            break;
            case 12:
            cout<<"\nA student can pursue a Major with Specialization, if he / she chooses to specialize in a sub-field relevant to his / her Major. This will allow them to deepen their learning in the said sub-field. To pursue a Specialization, the student must have taken a certain number of departmental and open electives from the same basket of intended specialization. For example, a student pursuing a Major in Computer Science and Engineering can specialize in Cyber Security, if he/she takes the required number of electives relating to Cyber Security. The exact number of electives to be taken from a particular sub-field to earn a specialization will be defined by the respective departments.";
            break;
            case 13:
            cout<<"\nSince a Minor is an option rather than a requirement, students may consider their passions and goals before pursuing any Minor in conjunction with their declared Major.  A student has an option to either choose a Minor within Engineering, or outside Engineering. In case of a Minor within engineering, it can be in any department other than the student’s Majoring department. For instance, a Computer Science and Engineering student can do a minor in Electronics and Communication Engineering or Electrical and Electronics Engineering.  And, in case of a Minor from outside Engineering, Computer Science and Engineering student can do a minor in Economics, History, or Journalism. The student will have to meet certain eligibility criteria set by respective departments in order to opt for a Minor.";
            break;
            case 14:
            cout<<"\nMinors and Specializations will allow students to have additional knowledge in some focus areas, providing them a career edge, or pursue an area of higher study in their field of interest. For instance, a Civil Engineer while on one hand gathering technical expertise, can also learn to run a business in the same area through a Minor in Business Management.";
            break;
            case 15:getchar();
            cout<<"\nenter your question : ";
            getline(cin,que);
            que_file.open("student FAQs.txt", ios::app );
            que_file<<que<<"\n";
            flag++;
            que_file.close();
            
            break;
            default :cout<<"\nyou have chosen the wrong key!!";
            break;
        }

    }
   
  
     friend class stedent_end;
};





int main()
{
  //  system("CLR");
    int exit_Student = 1;//choice for user end
    int university_see = 1;//choice for university end
    int num = 1;
    //int num_d = 2;
    student_end s[50],l;
    university_end p;
    string arr[50];
    string que;
    string answer;
    
    file.open("student detailes.txt", ios::out | ios::app);
    file <<left<<setw(20)<<"Student name"<<left<<setw(25)<<"mobilenumber"<<left<<setw(20)<<"course"<<left<<setw(35)<<"gmail_id"<<left<<setw(35)<<"address"<<left<<setw(25)<<"Guardian_name"<<"\n";
    file.close();
    
    cout << "\t\t\t----------------------------------------------------" << endl;
    cout << "\t\t\t|      STUDENT ADMISSION MANAGEMENT SYSTEM         |" << endl;
    cout << "\t\t\t----------------------------------------------------" << endl;
    int exitStatus;
    int exit_Status;

initialPos:
    exitStatus = 1;
    while (exitStatus >= 1)
    {
        int student_or_Staff;
        cout << "\n\t\t\tchoose\n\t\t\t1)student\n\t\t\t2)staff\n\t\t\t3)to exit";
        cout << "\nEnter your choice : ";
        cin >> student_or_Staff;
        bool val;
        switch (student_or_Staff)
        {
        case 1:
            exit_Student = 1;
            while (exit_Student >= 1)
            {
                int st_c; // student choice.........
                cout << "\t\t\tchoose:\n\t\t\t1)Admission validation\n\t\t\t2)quaries\n\t\t\t3)fee details\n\t\t\t0)to goo back to home position\n\t\t\t4)to exit";
                cout << "\nEnter your choice : ";
                cin >> st_c;
                switch (st_c)
                {
                case 1:
                    char y_n;
                    do
                    {
                        s[num].getMarks();
                        val = p.qualification_check(s[num]);
                        if (val == true)
                        {
                            cout << "\nYou are valid to apply this college !!!" << endl;
                            s[num].getPersonalInfo();
                            //s[num].getInfoCourse();
                            arr[num]=p.course_select();

                        }
                        else
                        {
                            cout << "\nYou are notvalid to apply this college !!!" << endl;
                            num--;
                        }
                        cout << "\nif you want to add another student enter y :";
                        cout << "\nEnter your choice : " << endl;
                        cin >> y_n;
                        num++;
                    } while (y_n == 'y' || y_n == 'Y');
                    break;
                case 2:
                exit_Status=1;
                int faq_choice;
                while(exit_Status>=1)
                {
                cout<<"\nEnter any key ;";
                cout<<"\n1) what are the admission requirments?";
                cout<<"\n2) what degrees are offered at uiniversity?";
                cout<<"\n3) when does the course begin?";
                cout<<"\n4) Is there any sports quota,if yes ,how to apply?";
                cout<<"\n5) When will i get admission confirmation?";
                cout<<"\n6) what is the student faculty ratio at university?";
                cout<<"\n7) What are the sports faculties on campus?";
                cout<<"\n8) Are they any student clubs on campus?";
                cout<<"\n9) Is there any transportation facility available?";
                cout<<"\n10) When can i visit campus?";
                cout<<"\n11) what is major?how eill i benifit me?";
                cout<<"\n12) what is specialization? hoe will i benifit me?";
                cout<<"\n13) what is minor? how will it benifit me?";
                cout<<"\n14) What is the advantage of choosing them in B-TECH?";
                cout<<"\n15) if you want to ask any question :";
                cout<<"\n16) if you want to exit :";
                cout<<"\nEnter your choice : ";
                cin>>faq_choice;
                if(faq_choice==16)
                {
                    exit_Status=0;
                }
                else
                {
                p.faq_answers(faq_choice);
                }
            
                }
                    
                    break;
                case 3:
                 cout << "\t\t\t----------------------------------------------------" << endl;
                 cout << "\t\t\t|               FEE DETAILES                       |" << endl;
                 cout << "\t\t\t----------------------------------------------------" << endl;
                 cout<<"\nCSE BRANCH TOTAL FEE IS 300000";
                 cout<<"\nECE BRANCH TOTAL FEE IS 250000";
                 cout<<"\nEEE BRANCH TOTAL FEE IS 200000";
                 cout<<"\nMECHANICAL BRANCH TATAL FEE IS 200000";
                 cout<<"\nCIVIL BRANCH TOTAL FEE IS 200000\n";
                    
                    break;
                case 0:
                    goto initialPos;
                    break;
                case 4:
                    exit_Student = 0;
                    break;
                default:
                {
                    cout << "\nEnter valid key!" << endl;
                }
                }
            }
            break;
        case 2:      
            val = p.password_check();
            if (val)
            {
                university_see = 1;
                while (university_see >= 1)
                {
                    int un_c; // facualty choice....
                    cout << "\n\t\t\tchoose:\n\t\t\t1)verifying and add\n\t\t\t2)response tostudents\n\t\t\t3)fee details\n\t\t\t0)to go back to initial position\n\t\t\t4)to exit";
                    cout << "\nEnter your choice : ";
                    cin >> un_c;
                    switch(un_c)
                    {
                    case 1:

                        for (int i = 1; i < num; i++)
                        { string sl_course;//course for student in array of courses
                        sl_course=arr[i];
                            s[i].display();
                            s[i].intofile(sl_course);
                        }
                        break;
                    case 2:
                           out.open("student FAQs.txt");
                        
                           if ( out.is_open() ) {
                          
                           while ( !out.eof() ) { // equivalent to myfile.good()
                            getline (out, que);
                            cout << que << '\n';
                            }
                            }
                            else {
                               cout << "Couldn't open file\n";
                                  }
                                  getchar();
                                if(flag!=0)
                                {  
                                  cout<<"\nEnter your answer :";
                                  getline(cin,answer);
                                  
                                  output.open("responses.txt",ios::app);
                                  output<<answer;
                                  output.close();
                                }
                                  
                                 
                        
                        break;
                    case 3:
                    for(int i=1;i<num;i++)
                    {
                        int fee=0;
                        fee=l.fee_de(arr[i]);
                        cout<<"\nstudent "<<i<<" have selected "<<arr[i]<<" fee had to pay is "<<fee<<endl;
                    }
                        
                        break;
                    case 0:
                        goto initialPos;
                        break;
                    case 4:
                        university_see = 0;
                        break;
                    default:
                    {
                        cout << "\nEnter valid key!" << endl;
                    }
                    }
                }
            }
            else
            {
                goto initialPos;
            }
            break;
        case 3:
            exitStatus = 0;
            break;
        default:
        {
            cout << "\nEnter valid key!" << endl;
        }
        }
    }
    return 0;
}