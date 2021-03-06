// Your First C++ Program

#include <iostream>
#include <windows.h>
#include <filesystem>
#include <string>
#include <vector>
#include <chrono>
#include <ctime>
#include <fstream>



namespace fs = std::filesystem;
using namespace std;

int main() {
  
    string Answer = "";
    while (true) {
        Sleep(100);
        cin >> Answer;
        if (Answer == "exit") {
            break;

            exit;
        }
        if (Answer == "Exit") {
            break;

            exit;
        }
        if (Answer == "calc") {
            cout << "Please enter the first number: ";
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
                break;
            case '-':
                answer = n1 - n2;
                break;
            case '*':
                answer = n1 * n2;
                break;
            case '/':
                answer = n1 / n2;
                break;
            }
            cout << "Thanks for using my calculator your answer is: " << answer << endl;
            Answer = "";
        }
        if (Answer == "help") {
            cout << "Commands:help,exit,dir" << endl;
            cout << "Programs:calc,time" << endl;
            Answer = "";
        }
       
        if (Answer == "time") {
            auto start = std::chrono::system_clock::now();
            auto legacyStart = std::chrono::system_clock::to_time_t(start);
            char tmBuff[30];
            ctime_s(tmBuff, sizeof(tmBuff), &legacyStart);
            std::cout << tmBuff << '\n';
            Answer = "";
        }
        if (Answer == "open") {
          

        }
        if (Answer == "dir") {
            
            Answer == "";
            cin >> Answer;
            
         
            fs::path p(Answer);
            for (auto i = std::filesystem::directory_iterator::directory_iterator(p); i != std::filesystem::directory_iterator::directory_iterator(); i++)
            {
                if (!is_directory(i->path())) //we eliminate directories
                {
                    cout << i->path().filename().string() << endl;
                }
                else
                    continue;
            }
         
           
        }
    }
    return 0;
}

