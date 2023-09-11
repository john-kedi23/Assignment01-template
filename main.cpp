#include <iostream>
#include<string>include "pch.h"
#include <cmath>
using namespace std;
int main()
{
    
int numOfStudents, numOfScore;
string nameOfStudents;
int numoftests, numofstudents;
const int ROW = 3;
const int COL = 3;
const int D = 3;

cout << "Enter the number of students:" << endl;
cin >> numOfStudents;
cout << " Enter the number of tests for each student:"<< endl;
cin >> numoftests;
cout << "Enter each students name.\n";
cin >> nameOfStudents;
for (int i = 0; i < numOfStudents; i++) {
 }
 int nums[ROW][COL] = {{0}};
int ID[D] = {0};

for (int i = 0; i < ROW; i++) {
std::cout << "\nEnter student ID[" << i + 1 << "]: ";
        
if (!(std::cin >> ID[i])) {
std::cerr << "error: invalid integer input.\n";
 return 1;
}

for (int j = 0; j < COL; j++) {
if (!j)
 std::cout.put('\n');
 std::cout << "Enter student[" << i+1 << "] Scores [" << j+1 << "]: ";
 if (!(std::cin >> nums[i][j])) {
 std::cout << "error: invalid integer input.\n";
return 1;
}
 }
}
    
for (int i = 0; i < ROW; i++){
double AVG = 0.;            
std::cout << "\nStudent ID: " << ID[i] << '\n';

for (int j = 0; j < COL; j++) {
std::cout << "  Score: " << nums[i][j] << '\n';
AVG += nums[i][j];
}
std::cout << "Average: " << AVG / COL << '\n';
}
}
return 0;
}
