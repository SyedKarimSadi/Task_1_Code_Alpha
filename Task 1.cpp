#include <iostream>
using namespace std;
int main() {
    int choice;
    do {
        // Menu
        cout<<"\n===== GPA/CGPA Calculator Menu =====" << endl;
        cout<<"1. Calculate Semester GPA" << endl;
        cout<<"2. Calculate Overall CGPA" << endl;
        cout<<"3. Exit" << endl;
        cout<<"Enter your choice (1-3): ";
        cin>>choice;

        switch(choice) {
            case 1: {
                int courses;
                cout<<"\nEnter the number of courses: ";
                cin>>courses;

                float gradePoint, totalPoints = 0;
                float credits, totalCredits = 0;

                for(int i = 0; i < courses; i++) {
                    cout<<"\nCourse "<< i+1 << endl;
                    cout<<"Enter Grade Point you got: ";
                    cin>>gradePoint;
                    cout<<"Enter Credit Hours: ";
                    cin>>credits;
                    totalPoints += gradePoint * credits;
                    totalCredits += credits;
                }
                
                if(totalCredits == 0) {
                    cout <<"Error: Total credits cannot be zero."<<endl;
                } else {
                    float gpa = totalPoints / totalCredits;
                    cout <<"\nSemester GPA = "<<gpa <<endl;
                }
                break;
            }
            case 2: {
                float previousCGPA, previousCredits, currentGPA, currentCredits;

                cout<<"\nEnter Previous CGPA: ";
                cin>>previousCGPA;
                cout<<"Enter Total Previous Credits: ";
                cin>>previousCredits;
                cout<<"Enter Current Semester GPA: ";
                cin>>currentGPA;
                cout<<"Enter Current Semester Credits: ";
                cin>>currentCredits;

                if((previousCredits + currentCredits) == 0) {
                    cout<<"Error: Total credits cannot be zero." <<endl;
                } else {
                    float overallCGPA = ((previousCGPA * previousCredits) + (currentGPA * currentCredits)) / (previousCredits + currentCredits);
                    cout<<"\nOverall CGPA = " << overallCGPA << endl;
                }
                break;
            }
            case 3:
                cout<<"\nExiting program. Goodbye!" <<endl;
                break;
            default:
                cout<<"Invalid choice! Please enter 1, 2, or 3." <<endl;
        }
    } while(choice != 3);
    
    return 0;
}
