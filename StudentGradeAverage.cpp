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

int main()
{
    ifstream file("grades.txt");

    if (!file) {
        cout << "Error! Unable to open file.\n";
        return 1;
    }
}

