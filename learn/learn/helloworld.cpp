#include <iostream>
#include "threepigs.h"
#include <string>
using namespace std;

int main()
{ 

};

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


struct champ {
    string name;
    string gender;
    int age;

};

void printChampArray(champ cArray[], int * len, bool &status) {
    for (int i = 0; i < *len; i++)
    {
        for (int j = 0; j < *len - i -1; j++)
        {
            if (cArray[j].age > cArray[j + 1].age)
            {
                int temp = cArray[j].age;
                cArray[j].age = cArray[j + 1].age;
                cArray[j + 1].age = temp;
            }
        }
    }

    status = true;
};


void printInfo(champ cArray[], int* len, bool &status) {
    if (status == false)
    {
        cout << "Before :" << endl;
    }
    else {
        cout << "After :" << endl;
    }
    for (int i = 0; i < *len; i++)
    {
        cout << "Name : \t" << cArray[i].name << endl;
        cout << "Age : \t" << cArray[i].age << endl;
        cout << "Gender : \t" << cArray[i].gender << endl;
        cout << "--------------------------------------------" << endl;
    }
};
*/





//<section ------1>
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
  /*
  champ cArray[5] = {
      {"Guanyu", "male", 20},
      {"Zhaoyun", "male", 21},
      {"Xiang", "female", 17},
      {"LinXiang", "female", 15},
      {"Diaochan", "female", 16}
  };
  int len = sizeof(cArray) / sizeof(cArray[0]);
  bool statusChange = false;
  printInfo(cArray, &len, statusChange);
  printChampArray(cArray, &len, statusChange);
  printInfo(cArray, &len, statusChange);
  */