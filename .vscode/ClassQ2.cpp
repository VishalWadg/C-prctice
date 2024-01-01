#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class CollegeCourse
{
private:
    string courseID;
    char Grd;
    int GradePoints;
    int credit;
    float honorpoint;
    void set_Grade(char gr);
    void set_Credit(int cr);
    void calculateGradePoints();
    void calculateHonorPoints();

public:
    void set_CourseID();
    void display();
};
void CollegeCourse::set_CourseID()
{
    string cid;
    char grd;
    int crd;
    cout << "Enter Course ID : ";
    cin >> cid;
    cout << "\n Enter Grade : ";
    cin >> grd;
    cout << "\n Enter Credits : ";
    cin >> crd;
    courseID = cid;
    set_Grade(grd);
    int gp = GradePoints;
    set_Credit(crd);
    calculateGradePoints();
    calculateHonorPoints();
}
void CollegeCourse::set_Grade(char gr)
{
    gr = toupper(gr);              // #include <bits/stdc++.h> --> toupper() function
    Grd = gr;
}
void CollegeCourse::set_Credit(int cr)
{
    credit = cr;
}
void CollegeCourse::calculateGradePoints()     //calculating gradepoints 
{
    switch (Grd)
    {
    case 'A':
    {
        GradePoints = 10;
        break;
    }
    case 'B':
    {
        GradePoints = 9;
        break;
    }
    case 'C':
    {
        GradePoints = 8;
        break;
    }
    case 'D':
    {
        GradePoints = 7;
        break;
    }
    case 'E':
    {
        GradePoints = 6;
        break;
    }
    case 'F':
    {
        GradePoints = 5;
        break;
    }
    default:
        break;
    }
}
void CollegeCourse::calculateHonorPoints()
{
    honorpoint = GradePoints * credit;    //calculating honorpoints as product of gradepoints and credits
}
void CollegeCourse::display()                  //   display function
{
    static int i=1;
    cout << "The Grade Points and the Honor Points for "<<i++<<"tescase are "<< GradePoints<<" & "<<honorpoint<<" respectivly"<< endl;
    
}

int main()        
{
    int n;
    cout << "Enter the test cases : ";
    cin >> n;
    CollegeCourse testcase[n];
    for (int i = 0; i < n; i++)
    {
        testcase[i].set_CourseID();
    }
    for (int i = 0; i < n; i++)
    {
        testcase[i].display();
    }
    return 0;
}