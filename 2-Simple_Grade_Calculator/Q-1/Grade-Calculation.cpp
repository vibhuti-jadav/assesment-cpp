#include<iostream>

using namespace std;

int main(){

int marks;
char grade;
cout << "marks: ";
cin >>marks;


if(marks > 90){
    grade = 'A';
    cout << "your grade is: " << grade <<endl;
}
else if(marks > 80){
    grade = 'B';
    cout << "your grade is: " << grade;
}
else if(marks > 70){
    grade = 'c';
    cout << "your grade is: " << grade;
}
else if(marks > 60){
    grade = 'D';
    cout << "your grade is: " << grade;
}
else if(marks > 50){
    grade = 'E';
    cout << "your grade is: " << grade;
}
else{
    grade = 'F';
    cout << "your grade is: " << grade;
}

switch (grade)
{
case 'A':
    cout << "Excellent work!"<<endl;
    break;

case 'B':
    cout << "well cdone";
    break;
case 'C':
    cout << "good  work!";
    break;
case 'D':
    cout << "You passed, but you could do better.!";
    break;

default:

    cout << "sorry you failed";
    break;
}






if(grade=='A' || grade=='B' || grade== 'C' || grade == 'D'){
    cout << "Congratulations! You are eligible for the next level"<<endl;
}
else {
    cout<< "better luck next time";
}



    return 0;
}