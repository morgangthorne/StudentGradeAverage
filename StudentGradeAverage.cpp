// StudentGradeAverage.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Programmer: Morgan Thorne
//Date: 9/24/2025


using namespace std;

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

//Global Variables
const int Test_Amount = 5;
const int Max_Students = 100;

//Function Prototypes
int ReadFile(ifstream& file, string Names[], int Scores[][Test_Amount]);
void Calculate_Average_Score(int Scores[][Test_Amount], double Averages[], int Number_of_Students[]);
char Letter_Grade_Average(double Single_Average[]);
void Report_Card(string Names[], double Averages[], int Number_of_Students[]);


int main()
{
    ifstream file("grades.txt");

    if (!file) {
        cout << "Error! Unable to open file.\n";
        return 1;
    }
}

int ReadFile(ifstream& file, string Names[], int Scores[][Test_Amount]){

}

void Calculate_Average_Score(int Scores[][Test_Amount], double Averages[], int Number_of_Students[]) {

}

char Letter_Grade_Average(double Single_Average[]) {

}

void Report_Card(string Names[], double Averages[], int Number_of_Students[]) {

}

