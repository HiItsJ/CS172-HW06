//
//  main.cpp
//  HW06
//
//  Created by Josiah on 11/8/16.
//  Copyright © 2016 Josiah. All rights reserved.
//

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

// ex: vector
//vector<string>babName1
//fin >>babname1.pushback()

//13.1
void createFile(){
    ofstream fout("Excersise13_1.txt", ios::in);
    fout.open("Excersise13_1.txt");
    
    if (fout.fail()){
        cout<<"can't open file"<<endl;
    }
    for (int i=0; i<100; i++){
        int randNum = rand() % 100;
        fout << randNum << " ";
    }
    fout.close();
}

//13.2
void openFile(){
    cout << "Enter the name of a file: ";
    string input;
    cin >> input;
    ifstream fin(input, ios::out);
    fin.open(input);
    
    if (!fin){
        cout<<"can't open file (2)"<<endl;
    }
    int count = 0;
    while (!fin.eof()){
        char n;
        fin>>n;
        count++;
    }
    cout << "Number of characters in the file: " << count << endl;
    fin.close();
}

//13.5
void babies(){
    //ifstream inputStream("
}

//14.3
#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
    public:
    Circle();
    Circle(double);
    double getArea() const;
    double getRadius() const;
    void setRadius(double);
    static int getNumberOfObjects();
    
    private:
    double radius;
    static int numberOfObjects;
    };

#endif
int main(){
    createFile();
    openFile();
    return 0;
}
