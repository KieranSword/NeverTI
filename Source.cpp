// Your First C++ Program

#include <iostream>
#include <windows.h>
#include <filesystem>
#include <string>
#include <vector>
#include <chrono>
#include <ctime>
#include <fstream>
#include <iostream>
#include <windows.h>
#include <ctime>
#include <vector>

    std::string Answer = "";
    std::string port = "";
    std::string currentdir = getenv("USERPROFILE");
    std::string contents = "";
    bool calcopen = false;

int main(){
    std::cout << "====Never OS====\n";

    system(("cd " + currentdir).c_str());


    while (true) {
        Sleep(100);
        std::cin >> Answer;
       
        if (Answer == "new") {
            std::cout << "What name/path?\n";
            std::cin >> Answer;
            std::cout << "What Contents?\n";
            std::cin >> contents;
            // Create and open a text file
            std::ofstream MyFile(Answer);

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
            std::cout << "Please enter the first number: ";
            calcopen = true;
            double n1 = 0;
            std::cin >> n1;
            std::cout << "Please enter an operator (+, -, *, /): ";
            char op = '0';
            std::cin >> op;
            std::cout << "Please enter a second number: ";
            double n2 = 0;
            std::cin >> n2;
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
            std::cout << "Thanks for using my calculator your answer is: " << answer << "\n";
            Answer = "";
        }
        if (Answer == "cls") {
            system("cls");
            std::cout << "====Never OS====" << "\n";
           
        }
        if (Answer == "help") {
            std::cout << "Commands:help,exit,dir,open,cls" << "\n";
            std::cout << "Programs:calc,time,web,python,cmd,bash" << "\n";
            Answer = "";
        }
        if (Answer == "bash") {
            system("bash");
        }
        if (Answer == "cmd") {
            system("cmd");
        }
        if(Answer == "web") {
            std::cout << "What Address?\n";
            std::cin >> Answer;
            std::cout << "What Port? Default is 23!\n";
            std::cin >> port;
       
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
            std::ifstream myReadFile;
            Answer == "";
            std::cin >> Answer;
            myReadFile.open(Answer);
            char output[100];
            if (myReadFile.is_open()) {
                while (!myReadFile.eof()) {


                    myReadFile >> output;
                    std::cout << output << "\n";


                }
            }
            myReadFile.close();
        }
        if (Answer == "python") {
            system("py");
        }
        if (Answer == "dir") {
            std::cin >> Answer; 
            std::cout << "Where? and do currentdir for the current directory!\n";
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
