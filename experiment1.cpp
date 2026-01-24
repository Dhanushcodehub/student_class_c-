#include <iostream>
#include <string>
using namespace std;

class student {
    private:
    int rollNumber;
    string name;
    float marks;

    public:
    student(){
        rollNumber = 0;
        name = "";
        marks = 00;
    }
    
    void input(){
        cout<<"Enter Roll Number:";
        cin>>rollNumber;
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter Marks:";
        cin>>marks;
    }

    void display(){
        cout<<"Roll Number: "<<rollNumber<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
    }

    ~student(){
        // Destructor
        cout<<"Destructor called for Roll Number: "<<rollNumber<<endl;
    }
};

int main(){
    int n;
    cout<<"Enter number of students:";
    cin>>n;

    student* students = new student[n]; 
    for(int i=0; i<n; i++){
        cout<<"Enter details for student "<<i+1<<":"<<endl;
        students[i].input();
    }
    cout<<"Displaying student details:"<<endl;
    for(int i=0; i<n; i++){
        cout<<"Student "<<i+1<<":"<<endl;
        students[i].display();
    }
    delete[] students;
    return 0;
}