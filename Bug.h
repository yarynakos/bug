#include <iostream>
#include <string>

using namespace std;

class Bug{
private:
    string severity;
    string deadline;
    string status;
    string assignee;
public:
 Bug(string severity, string deadline, string status, string assignee){
     this-> severity = severity;
     this-> deadline = deadline;
     this-> status = status;
     this-> assignee = assignee;

 }
 Bug(){

 }
 string getSeverity(){
     return severity;
 }
 string getDeadline(){
     return deadline;
 }
 string getStatus(){
     return status;
 }
 string getAssignee(){
     return assignee;
 }
    void print() {
        cout << "Severity: " << severity << "Deadline" << ": " << deadline << " " << "Status: " << status<< " "
                  << "Assignee: " << assignee << endl;
    }

};
