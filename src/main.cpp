#include <iostream>
#include <fstream>
#include <sstream>

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
        string labels;
        getline(inFS, labels, '\n');

        // iterate until end of csv file
        while (!inFS.eof()) {
            string line;
            getline(inFS, line, '\n');

            stringstream inSS(line);

            string caseID;
            string docketID;
            string caseIssueID;
            string voterID;

            string dateDecision;
            string decisionType;

            string usCite;
            string sctCite;
            string ledCite;
            string lexisCite;

            string term;
            string naturalCourt;
            string chief;
            string docket;

            string caseName;
            string dateArgument;
            string dateRearg;

            string petitioner;
            string petitionerState;
            string respondent;
            string respondentState;

            string jurisdiction;
            string adminAction;
            string adminActionState;

            string threeJudgeFdc;
            string caseOrigin;
            string caseOriginState;

            string caseSource;
            string caseSourceState;

            string lcDisagreement;
            string certReason;

            string lcDisposition;
            string lcDispositionDirection;
            string declarationUncon;
            string caseDisposition;
            string caseDispositionUnusual;

            string partyWinning;
            string precedentAlteration;
            string voteUnclear;

            string issue;
            string issueArea;

            string decisionDirection;
            string decisionDirectionDissent;
            string authorityDecision1;
            string authorityDecision2;

            string lawType;
            string lawSupp;
            string lawMinor;

            string majOpinWriter;
            string majOpinAssigner;

            string splitVote;
            string majVotes;
            string minVotes;

            string justice;
            string justiceName;

            string vote;
            string opinion;
            string direction;
            string majority;

            string firstAgreement;
            string secondAgreement;

            getline(inSS, caseID, ',');
            getline(inSS, docketID, ',');
            getline(inSS, caseIssueID, ',');
            getline(inSS, voterID, ',');

            getline(inSS, dateDecision, ',');
            getline(inSS, decisionType, ',');

            getline(inSS, usCite, ',');
            getline(inSS, sctCite, ',');
            getline(inSS, ledCite, ',');
            getline(inSS, lexisCite, ',');

            getline(inSS, term, ',');
            getline(inSS, naturalCourt, ',');
            getline(inSS, chief, ',');
            getline(inSS, docket, ',');

            // check whether case name has commas
            int pos = line.find('\"');
            if (pos == -1) {
                // use comma as delimiter
                getline(inSS, caseName, ',');
            } else {
                // capture case name with quotations as delimiters
                inSS.ignore(1);
                getline(inSS, caseName, '\"');
                inSS.ignore(1);
            }

            getline(inSS, dateArgument, ',');
            getline(inSS, dateRearg, ',');

            getline(inSS, petitioner, ',');
            getline(inSS, petitionerState, ',');
            getline(inSS, respondent, ',');
            getline(inSS, respondentState, ',');

            getline(inSS, jurisdiction, ',');
            getline(inSS, adminAction, ',');
            getline(inSS, adminActionState, ',');

            getline(inSS, threeJudgeFdc, ',');
            getline(inSS, caseOrigin, ',');
            getline(inSS, caseOriginState, ',');

            getline(inSS, caseSource, ',');
            getline(inSS, caseSourceState, ',');

            getline(inSS, lcDisagreement, ',');
            getline(inSS, certReason, ',');

            getline(inSS, lcDisposition, ',');
            getline(inSS, lcDispositionDirection, ',');
            getline(inSS, declarationUncon, ',');
            getline(inSS, caseDisposition, ',');
            getline(inSS, caseDispositionUnusual, ',');

            getline(inSS, partyWinning, ',');
            getline(inSS, precedentAlteration, ',');
            getline(inSS, voteUnclear, ',');

            getline(inSS, issue, ',');
            getline(inSS, issueArea, ',');

            getline(inSS, decisionDirection, ',');
            getline(inSS, decisionDirectionDissent, ',');
            getline(inSS, authorityDecision1, ',');
            getline(inSS, authorityDecision2, ',');

            getline(inSS, lawType, ',');
            getline(inSS, lawSupp, ',');
            getline(inSS, lawMinor, ',');

            getline(inSS, majOpinWriter, ',');
            getline(inSS, majOpinAssigner, ',');

            getline(inSS, splitVote, ',');
            getline(inSS, majVotes, ',');
            getline(inSS, minVotes, ',');

            getline(inSS, justice, ',');
            getline(inSS, justiceName, ',');

            getline(inSS, vote, ',');
            getline(inSS, opinion, ',');
            getline(inSS, direction, ',');
            getline(inSS, majority, ',');

            getline(inSS, firstAgreement, ',');
            getline(inSS, secondAgreement, '\r');

            cout << justice << " " << justiceName << endl;
        }
    }

    inFS.close();
}