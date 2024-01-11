#include <iostream>
#include <fstream>
#include <limits>
#include <vector>
#include <algorithm>
#include <string>


using namespace std;

ifstream fin("main.txt");
ofstream fout("main.txt", ios::app);
ofstream fout2("completed.txt", ios::app);

class Task {
    private:
        string name;
        string date;
        string details;
    public:
        Task(string n, string d, string s) : name(n), date(d), details(s) {}
};

class ToDoList {
    public:
        void makeNewTask() {
            string name, date, details;
            cout << "Name: "; 
            getline(cin, name);
            cout << "Date: "; 
            getline(cin, date);
            cout << "Note: ";
            getline(cin, details);

            fout << name << endl;
            fout << date << endl;
            fout << details << endl;
        }
        void getList(bool &name, bool &date, bool &details) {
            fin.close();
            fin.open("main.txt");
            string currline;
            int counter = 0;
            int task_number = 0;
            while(getline(fin, currline)) {
                if(counter % 3 == 0 && name) {
                    cout << "(" << task_number+1 << ") : ";
                    cout << "" << currline << endl;
                    task_number++;
                } else if(counter % 3 == 1 && date) {
                    cout << "   " << currline << endl;
                } else if(counter % 3 == 2 && details) {
                    cout << "       " << currline << endl;
                }
                counter++;
            }
        }
        
        void removeFromList(int& n) {
            fin.close();
            fin.open("main.txt");
            string line;
            int counter = 0;
            int num_task = 0;
            while (getline(fin, line)) {
                if (counter % 3 == 0) {
                    if (num_task + 1 == n) {
                        writeToSpecificLine("main.txt", counter, " (Completed) ");
                        fout2 << line;
                    }
                    num_task++;
                }   
                counter++;
            }
        }
        
    private:
        void writeToSpecificLine(const string& fileName, int lineToWrite, const string& newContent) {
            ifstream inFile(fileName);
            vector<string> lines;
            string line;

            // Read all lines from the file
            while (getline(inFile, line)) {
                lines.push_back(line);
            }

            inFile.close();

            // Modify the desired line
            if (lineToWrite >= 0 && lineToWrite <= lines.size()) {
                lines[lineToWrite] += newContent;
            } else {
                cout << "Invalid line number." << endl;
                return;
            }

            // Write the modified content back to the file
            ofstream outFile(fileName);
            for (const string& modifiedLine : lines) {
                outFile << modifiedLine << endl;
            }

            outFile.close();
        }
};


int main() {
    ToDoList* ptr = new ToDoList();
    bool c = true;
    while(c) {
        string input;
        cout << "Options: 'New', 'Complete', 'Update', 'Exit'" << endl;
        getline(cin, input);
        if(input == "New") {
            ptr->makeNewTask();
        } else if(input == "Complete") {
            cout << "Which task did you complete?" << endl;
            bool yes = true;
            bool no = false;
            ptr->getList(yes, no, no);
            int n; 
            cin >> n;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            ptr->removeFromList(n);
        } else if(input == "Update") {
            
        } else if(input == "Exit") {
            c = false;
        } else if(input == "Get List") {
            bool yes = true;
            bool no = -yes;
            ptr->getList(yes,yes,yes);
        }
    }
    
    fout.close();
    fout2.close();
    fin.close();
    return 0;
}