#include "Bug.h"
using namespace std;
#include <vector>


class Backlog{
private:
    vector<Bug> bugs;
public:
    void addBug (Bug bug){
        bugs.push_back(bug);
    }
    Backlog(){

    }
    void sortBugs();
 void find(string name);


};
