#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <vector>

using namespace std;

// function prototypes
void read_case_file();
void read_justice_file();

int main() {
    //read_case_file();
    read_justice_file();
    return 0;
}

// function for reading case centered data file
void read_case_file() {
    ifstream caseFS("../data/2022_01_caseCentered_Citation.csv");

    if (caseFS.is_open()) {
        cout << "Case file not found!" << endl;
        return;
    } else {
        
    }
}

// function for reading justice centered data file
void read_justice_file() {
    ifstream inFS("../data/2022_01_justiceCentered_Citation.csv");

    // check if file was found
    if (!inFS.is_open()) {
        cout << "Justice file not found" << endl;
        return;
    } else {
        while (!inFS.eof()) {
            string labels;
            string line;

            getline(inFS, labels, '\n');
            getline(inFS, line, '\n');

            stringstream inSS(line);

            bool qfound = false;
            bool cfound = false;

            int start = 0;
            int end = 0;

            vector<string> dataline;

            // iterate through line
            for (int j = 0; j < line.size(); j++) {
                // check if character is a quote
                if (line[j] == '\"') {
                    // check if starting or closing quote
                    if (qfound) {
                        end = j;
                        qfound = false;

                        string word = line.substr(start, end - start);
                        dataline.push_back(word);
                    } else {
                        qfound = true;
                        start = j+1;
                    }
                    // check if character is a comma and not in middle of quotes
                } else if(line[j] == ',' && !qfound) {
                    if (cfound) {
                        end = j;
                        cfound = false;

                        string word = line.substr(start, end - start);
                        dataline.push_back(word);

                        // check if ending quote is another starting quote
                        if (j+1 < line.size() && line[j+1] != '\"') {
                            cfound = true;
                            start = j+1;
                        }
                    } else if (j+1 < line.size() && line[j+1] != '\"') {
                        cfound = true;
                        start = j+1;
                    }
                }
            }

            // print out justice and ID
            cout << dataline[53] << " " << dataline[54] << endl;
        }
    }
}