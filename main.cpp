#include <iostream>
#include <vector>
using namespace std ;

class Course
{


private:
   string courseName, courseCode ;
   int courseHours ;
   vector<Course> prerequisites ;
   Professor professor_obj ;
   vector<Student>  students_obj ;

public:
    Course()
    {
        cout << " Course is created !" ;
    }

    Course( string Name , string Code , int Hours , vector<Course> courses , Professor professor , vector<Student> students ) {

        courseName = Name ;
        courseCode = Code ;
        courseHours = Hours;
        prerequisites = courses ;
        professor_obj = professor ;
        students_obj = students;
            }


        // Setters & Getters of  prerequisites
        void set_prerequisites( vector<Course> courses)
        {
            prerequisites = courses ;
        }
        vector<Course> get_prerequisites()
        {
            return prerequisites ;
        }

        // Setters & Getters of  Professor
        void set_professor( Professor professor)
        {
            professor_obj = professor ;
        }
        vector<Course> get_Professor()
        {
            return professor_obj ;
        }

        // Setters & Getters of  students
        void set_students( vector<Student> students)
        {
            students_obj = students ;
        }
        vector<Student> get_students()
        {
            return students_obj ;
        }


    // Name setters & getters
    void setCourseName(string coursName)
    {
        courseName = coursName ;
    }

    string getCourseName()
    {
        return courseName ;
    }


    //  Code setters & getters
    void setCourseCode(string coursCode)
    {
        courseCode = coursCode ;
    }

    string getCourseCode()
    {
        return courseCode ;
    }


    // Hours setters & getters
    void setCourseHours(int coursHours)
    {
        courseHours = coursHours ;
    }

    int getCourseName()
    {
        return coursHours ;
    }




};

int main ()
{

   // Course course ;


}

//  -- Single tone class --
class University
{

private:
    static University *ptr ;

    University(){

    }

public :

    static University get_pointer ()
    {
        if( ptr == nullptr )
        {
            ptr = new University() ;
        }
        else
         return ptr;

        }




};


