#include "Backlog.h"

void Backlog::sortBugs() {
    Bug temp;
    for (int i = 0; i < bugs.size(); i++) {
        for (int j = i + 1; j < bugs.size(); j++) {
            if (bugs[j].getSeverity().length() > bugs[i].getSeverity().length()) {
                temp = bugs[j];
                bugs[j] = bugs[i];
                bugs[i] = temp;
            }
        }
    }
    for (int i = 0; i < bugs.size(); i++) {
        bugs[i].print();
    }
}

void Backlog::find(string name) {
    for (int i = 0; i < bugs.size(); i++) {
        if (bugs[i].getAssignee() == name && bugs[i].getStatus() == "Resolved") {
            bugs[i].print();
        }
    }
}