// Your First C++ Program

#include <iostream>
#include <windows.h>
#include <filesystem>
#include <string>
#include <vector>
#include <chrono>
#include <ctime>
#include <fstream>
#include <conio.h>
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <ctime>
#include <vector>
#pragma warning(disable:4996)
using namespace std::filesystem;

using namespace std;


int main(){
    cout << "====Never OS====" << endl;
    string Answer = "";
    string port = "";
    string currentdir = getenv("USERPROFILE");
    string contents = "";
    bool calcopen = false;
    system(("cd " + currentdir).c_str());


    while (true) {
        Sleep(100);
        cin >> Answer;
       
        if (Answer == "new") {
            cout << "What name/path?";
            cin >> Answer;
            cout << "What Contents?";
            cin >> contents;
            // Create and open a text file
            ofstream MyFile(Answer);

            // Write to the file
            MyFile << contents;

            // Close the file
            MyFile.close();

        }
        if (Answer == "exit") {
            break;

            exit;
        }

        if (Answer == "calc") {
            cout << "Please enter the first number: ";
            calcopen = true;
            double n1 = 0;
            cin >> n1;
            cout << "Please enter an operator (+, -, *, /): ";
            char op = '0';
            cin >> op;
            cout << "Please enter a second number: ";
            double n2 = 0;
            cin >> n2;
            double answer = 0;
            switch (op) {
            case '+':
                answer = n1 + n2;
                calcopen = false;

                break;
            case '-':
                answer = n1 - n2;
                calcopen = false;
                break;
            case '*':
                answer = n1 * n2; 
                calcopen = false;

                break;
            case '/':
                answer = n1 * n2;
                calcopen = false;
                break;
            }
            cout << "Thanks for using my calculator your answer is: " << answer << endl;
            Answer = "";
        }
        if (Answer == "cls") {
            system("cls");
            cout << "====Never OS====" << endl;
           
        }
        if (Answer == "help") {
            cout << "Commands:help,exit,dir,open,cls" << endl;
            cout << "Programs:calc,time,web,python,cmd,bash" << endl;
            Answer = "";
        }
        if (Answer == "bash") {
            system("bash");
        }
        if (Answer == "cmd") {
            system("cmd");
        }
        if(Answer == "web") {
            cout << "What Address?\n";
            cin >> Answer;
            cout << "What Port? Default is 23!\n";
            cin >> port;
       
            system(std::string("telnet.exe " + Answer + " " + port).c_str());
            
        }
        if (Answer == "cmd") {
            
           
        }
        if (Answer == "time") {
            auto start = std::chrono::system_clock::now();
            // Some computation here
            auto end = std::chrono::system_clock::now();

            std::chrono::duration<double> elapsed_seconds = end - start;
            std::time_t end_time = std::chrono::system_clock::to_time_t(end);

            std::cout << std::ctime(&end_time);
         
        }
        if (Answer == "open") {
            ifstream myReadFile;
            Answer == "";
            cin >> Answer;
            myReadFile.open(Answer);
            char output[100];
            if (myReadFile.is_open()) {
                while (!myReadFile.eof()) {


                    myReadFile >> output;
                    cout << output << endl;


                }
            }
            myReadFile.close();
        }
        if (Answer == "python") {
            system("py");
        }
        if (Answer == "dir") {
            cin >> Answer; 
            cout << "Where? and do currentdir for the current directory!\n";
            if (Answer != "currentdir") {
                system(("dir " + Answer).c_str());
            }
            else {
                system(("dir " + currentdir).c_str());
            }
            
        }
    }
        return 0;  
}
