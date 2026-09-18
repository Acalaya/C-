 #include<iostream>
 using namespace std;

 //Base class
 class Person{
public:
    void showPerson(){
        cout<<"I am a person"<<endl;
    }
 };

 //1.Single Inheritance
class Student: public Person{
public:
    void showStudent(){
        cout<<"I am a student."<<endl;
    }
};

//2. Multiple Inheritance
class Player{
public:
    void showPlayer(){
        cout<<"I am a player."<<endl;
    }
};
class StudentPlayer : public Student, public Player{
public:
    void showStudentPlayer(){
        cout<<"I am a student and lso a player."<<endl;
    }
};
//3.Multilevel Inheritance
class Graduate: public Student{
public:
    void showGraduate(){
        cout<<"I am a Graduate Student."<<endl;
    }
};

//4. Hierarchial Inheritance
class Teacher: public Person {
public:
    void showTeacher(){
        cout<<"I am a teacher."<<endl;
    }
};

//5. Hybrid Inheritance (combination)
class Researcher : public Graduate, public Player{
public:
    void showResearcher(){
        cout<<"I am a Researcher(Graduate+player)"<<endl;
    }
};

int main() {
    cout << "--- 1. Single Inheritance ---" << endl;
    Student s;
    s.showPerson();   // Inherited from Person
    s.showStudent();

    cout << "\n--- 2. Multiple Inheritance ---" << endl;
    StudentPlayer sp;
    sp.showStudent();  // Inherited from Student
    sp.showPlayer();   // Inherited from Player
    sp.showStudentPlayer();

    cout << "\n--- 3. Multilevel Inheritance ---" << endl;
    Graduate g;
    g.showPerson();   // Inherited from Person via Student
    g.showStudent();  // Inherited from Student
    g.showGraduate();

    cout << "\n--- 4. Hierarchical Inheritance ---" << endl;
    Teacher t;
    t.showPerson();   // Inherited from Person
    t.showTeacher();

    cout << "\n--- 5. Hybrid Inheritance ---" << endl;
    Researcher r;
    r.showPerson();   // Inherited via Graduate -> Student -> Person
    r.showGraduate(); // Inherited from Graduate
    r.showPlayer();   // Inherited from Player
    r.showResearcher();

    return 0;
}

