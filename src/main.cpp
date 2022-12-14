#include <iostream>
#include <fstream>

using namespace std;

// function prototypes
void read_case_file();
void read_justice_file();

int main() {
    read_case_file();
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
    ifstream justiceFS("../data/2022_01_justiceCentered_Citation.csv");

    if (!justiceFS.is_open()) {
        cout << "Justice file not found" << endl;
        return;
    } else {
        //while (!justiceFS.eof()) {
        for (int i = 0; i < 20; i++) {
            string caseID;
            string docketID;
            string caseIssuesID;
            string voteID;

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
            string caseArgument;
            string caseRearg;
    
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

            string dummy;
            getline(justiceFS, dummy, '\n');

            getline(justiceFS, caseID, ',');
            getline(justiceFS, docketID, ',');
            getline(justiceFS, caseIssuesID, ',');
            getline(justiceFS, voteID, ',');

            getline(justiceFS, dateDecision, ',');
            getline(justiceFS, decisionType, ',');

            getline(justiceFS, usCite, ',');
            getline(justiceFS, sctCite, ',');
            getline(justiceFS, ledCite, ',');
            getline(justiceFS, lexisCite, ',');

            getline(justiceFS, term, ',');
            getline(justiceFS, naturalCourt, ',');
            getline(justiceFS, chief, ',');
            getline(justiceFS, docket, ',');

            // ERROR: getline() not reading caseName correctly
            getline(justiceFS, caseName, ',');
            getline(justiceFS, caseArgument, ',');
            getline(justiceFS, caseRearg, ',');

            getline(justiceFS, petitioner, ',');
            getline(justiceFS, petitionerState, ',');
            getline(justiceFS, respondent, ',');
            getline(justiceFS, respondentState, ',');


            getline(justiceFS, jurisdiction, ',');
            getline(justiceFS, adminAction, ',');
            getline(justiceFS, adminActionState, ',');
            getline(justiceFS, threeJudgeFdc, ',');

            getline(justiceFS, caseOrigin, ',');
            getline(justiceFS, caseOriginState, ',');
            getline(justiceFS, caseSource, ',');
            getline(justiceFS, caseSourceState, ',');

            getline(justiceFS, lcDisagreement, ',');
            getline(justiceFS, certReason, ',');
            getline(justiceFS, lcDisposition, ',');
            getline(justiceFS, lcDispositionDirection, ',');
            getline(justiceFS, declarationUncon, ',');
            getline(justiceFS, caseDisposition, ',');
            getline(justiceFS, caseDispositionUnusual, ',');
            getline(justiceFS, partyWinning, ',');
            getline(justiceFS, precedentAlteration, ',');
            getline(justiceFS, voteUnclear, ',');
            getline(justiceFS, issue, ',');
            getline(justiceFS, issueArea, ',');
            getline(justiceFS, decisionDirection, ',');
            getline(justiceFS, decisionDirectionDissent, ',');
            getline(justiceFS, authorityDecision1, ',');
            getline(justiceFS, authorityDecision2, ',');
            getline(justiceFS, lawType, ',');
            getline(justiceFS, lawSupp, ',');
            getline(justiceFS, lawMinor, ',');
            getline(justiceFS, majOpinWriter, ',');
            getline(justiceFS, majOpinAssigner, ',');
            getline(justiceFS, splitVote, ',');
            getline(justiceFS, majVotes, ',');
            getline(justiceFS, minVotes, ',');

            getline(justiceFS, justice, ',');
            getline(justiceFS, justiceName, ',');
            getline(justiceFS, vote, ',');
            getline(justiceFS, opinion, ',');
            getline(justiceFS, direction, ',');
            getline(justiceFS, majority, ',');
            getline(justiceFS, firstAgreement, ',');
            getline(justiceFS, secondAgreement, ',');

            cout << justice << " " << justiceName << endl;
        }
    }
}