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
void Calculate_Average_Score(int Scores[][Test_Amount], double Averages[], int Number_of_Students);
char Letter_Grade_Average(double Single_Average);
void Report_Card(string Names[], double Averages[], int Number_of_Students);


int main()
{
    ifstream file("grades.txt");

    if (!file) {
        cout << "Error! Unable to open file.\n";
        return 1;
    }

    string Names[Max_Students];
    int Scores[Max_Students][Test_Amount];
    double Averages[Max_Students];


    int Number_of_Students = ReadFile(file, Names, Scores);

    Calculate_Average_Score(Scores, Averages, Number_of_Students);

    Report_Card(Names, Averages, Number_of_Students);
}

int ReadFile(ifstream& file, string Names[], int Scores[][Test_Amount]){
    int Student_Count = 0;

    while (file && Student_Count < Max_Students) {
        file >> Names[Student_Count];

        for (int i = 0; i < Test_Amount; i++) {
            file >> Scores[Student_Count][i];
        }
        Student_Count++;
    }

    return Student_Count;
}

void Calculate_Average_Score(int Scores[][Test_Amount], double Averages[], int Number_of_Students) {

    for (int i = 0; i < Number_of_Students; i++) {
        int Sum = 0;
        
        for (int a = 0; a << Test_Amount; a++) {
            Sum += Scores[i][a];
        }
        Averages[i] = static_cast<double>(Sum) / Test_Amount;
    }
}

char Letter_Grade_Average(double Single_Average) {
    if (Single_Average >= 90) return 'A';
    else if (Single_Average >= 80) return 'B';
    else if (Single_Average >= 70) return 'C';
    else if (Single_Average >= 60) return 'D';
    else return 'F';
}

void Report_Card(string Names[], double Averages[], int Number_of_Students) {
    cout << "Student Name      Average   Grade\n";
    cout << "--------------------------------\n";
}

