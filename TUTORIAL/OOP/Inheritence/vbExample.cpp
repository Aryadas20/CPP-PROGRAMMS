#include <iostream>
using namespace std;

/*
student -->Test[done]
student -->sports[done]
test -->result; [done]
sports-->result;[done]
*/
class Student
{
public:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }

    void print_number(void)
    {
        cout << "Your roll no is: " << roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }

    void print_marks(void)
    {
        cout << "You result is here: " << endl
             << "Maths: " << maths << endl
             << "Physics: " << physics << endl;
    }
};

class sports : public virtual Student
{
protected:
    float score;

public:
    void set_score(float x)
    {
        score = x;
    }

    void display_score(void)
    {
        cout << "Your PT score is: " << score << endl;
    }
};

class Result : public Test, public sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        display_score();

        // or

        // Student::print_number();
        // Test::print_number();
        // sports::display_score();

        cout << "Your final score is: " << total << endl;
    }
};
int main()
{
    Result r;
    r.set_number(200977);
    r.set_marks(100, 90);
    r.set_score(90);
    r.display();
    return 0;
}