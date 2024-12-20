


#include <iostream>
#include <iomanip>
using namespace std;


class Student {
    public:
    int roll_no;
    string name;
    int chem_marks;
    int maths_marks;
    int phy_marks;
};


void getData(Student s) {
    int total = s.chem_marks + s.maths_marks + s.phy_marks;
    double percentage = (total / 300.0) * 100;  


    cout << s.name << " (" << s.roll_no << ")\n";
    cout << "Chemistry => " << s.chem_marks << "\n";
    cout << "Mathematics => " << s.maths_marks << "\n";
    cout << "Physics => " << s.phy_marks << "\n";
    cout << "Total => " << total << "/300\n";
    cout << "Percent => " << fixed << setprecision(2) << percentage << "%\n";
}

int main() {
    Student students[5];  

    for (int i = 0; i < 5; i++) {
        cout << "Enter details of Student " << i + 1 << ":\n";
        cout << "Roll no => ";
        cin >> students[i].roll_no;
        cin.ignore();  
        cout << "Name => ";
        getline(cin, students[i].name);
        cout << "Chemistry => ";
        cin >> students[i].chem_marks;
        cout << "Mathematics => ";
        cin >> students[i].maths_marks;
        cout << "Physics => ";
        cin >> students[i].phy_marks;
        cout << endl;
    }

    cout<<"output:"<<endl;

    for (int i = 0; i < 5; i++) {
        getData(students[i]);
        cout << endl;
    }

    return 0;
}
