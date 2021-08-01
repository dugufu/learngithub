#include <iostream>
#include "threepigs.h"
#include <string>
using namespace std;
/*
struct Student {
    string name;
    int age;
    int score;
};

struct Teacher {
    int teacher_id;
    string name;
    int age;
    struct Student stu;
};

void printStudent(Teacher T) {
    cout << "ID\t" << T.teacher_id << endl;
    cout << "Name\t" << T.name << endl;
    cout << "Age\t" << T.age << endl;
    cout << "Student's Name\t" << T.stu.name << endl;
    cout << "Student's Age \t" << T.stu.age << endl;
    cout << "Student's Score \t" << T.stu.score << endl;
    cout << endl;
}

void printStudent_ptr(Teacher *T) {
    cout << "ID\t" << T->teacher_id << endl;
    cout << "Name\t" << T->name << endl;
    cout << "Age\t" << T->age << endl;
    cout << "Student's Name\t" << T->stu.name << endl;
    cout << "Student's Age \t" << T->stu.age << endl;
    cout << "Student's Score \t" << T->stu.score << endl;
    cout << endl;
}

 */

struct Student {

    string name;
    int age;
    int score;
};

struct Teacher {
    string name;
    int age;
    struct Student stuArray[5];
};


void allocated(Teacher tArray[], const int *len, const int *stuArray)
{
    string nameSeed = "ABCDE";
    for (int i = 0; i < *len; i++)
    {
        tArray[i].name = "Teacher_";
        tArray[i].age = 30 + (i * 2);
        tArray[i].name += nameSeed[i];

        for (int j = 0; j < *stuArray; j++)
        {
            tArray[i].stuArray[j].name = "Student_";
            tArray[i].stuArray[j].name += nameSeed[j];
            tArray[i].stuArray[j].age = j + 16;
            tArray[i].stuArray[j].score = rand() % 60 + 40;

        }
    }
}

void printInfo(struct Teacher tArray[], int *len, int  *stuLen)
{
    for (int i = 0; i < *len; i++)
    {
        cout << "Teahcer's name : \t" << tArray[i].name << endl;
        cout << "Teacher's age : \t" << tArray[i].age << endl << endl;
        for (int j = 0; j < *stuLen; j++)
        {
            cout << "Student's name : \t" << tArray[i].stuArray[j].name << endl;
            cout << "Student's age : \t" << tArray[i].stuArray[j].age << endl;
            cout << "Student's score : \t" << tArray[i].stuArray[j].score << endl << endl;
        }
        cout << "----------------------------------------------------------------" << endl;
    }
}

int main()
{   //<section ------1>
    //threepigs();
    //two_dimensional_project();
    //two_d_explain();
    /**
    * <section -------2>
    int num1 = 10, num2 = 10;
    int return_number = define_function(num1,num2);
    cout << "Return number :" << return_number<< endl;
    
    <section ------ 3>
    int arr[10] = { 2,5,9,8,10,7,4,6,3,1 };
    int len = sizeof(arr) / sizeof(arr[0]) ;
    bubble(arr, len);
	printArray(arr, len);
   

    struct Student s1;

    s1.name = "ccr";
    s1.age = 19;
    s1.score = 86;

    cout << "Name : " << s1.name << endl << "Age : " << s1.age << endl << "Score :" << s1.score << endl;

    struct Student s2 = { "ccr1", 20, 99};

    cout << "\n Name : " << s2.name << endl << "Age : " << s2.age << endl << "Score :" << s2.score << endl;
     

    struct Student studentArray[3] = {
        {"one", 19, 100},
        {"two", 40, 60},
        {"three", 60,20}
    };

    int len = sizeof(studentArray) / sizeof(studentArray[0]);

    for (int i = 0; i < len; i++)
    {
        cout << "\n Name : " << studentArray[i].name << endl 
             << "Age : " << studentArray[i].age << endl 
             << "Score :" << studentArray[i].score << endl;
    }
    */

    /** 
    Student s = { "1", 19, 100 };
    Student* ptr = &s;
    cout << ptr->name << endl;
    cout << ptr->age<< endl;
    cout << ptr->score << endl;
    

    Teacher t;
    t.teacher_id = 1;
    t.name = "lao_wang";
    t.age = 40;
    t.stu.name = "xiaowang";
    t.stu.age = 20;
    t.stu.score = 100;

    Teacher t2 = { 2, "laodi", 50, "xiaoliu", 20, 80};
    struct Teacher* ptr = &t2;
    printStudent(t);
    printStudent_ptr(ptr);
    return 0;
    */
    struct Teacher teaArray[3];
    struct Student stuArray[5];
    int len =  sizeof(teaArray) / sizeof(teaArray[0]);
    int stuLen =  sizeof(stuArray) / sizeof(stuArray[0]);

    allocated(teaArray, &len, &stuLen);
    printInfo(teaArray,& len, &stuLen);
};

