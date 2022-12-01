#include <iostream>

#include "Backlog.h"

int main() {
    Bug bug1 = Bug("Critical", "06.04.2022", "Resolved", "Yulia");
    Bug bug2 = Bug("Low", "14.04.2022", "Unresolved", "Igor");
    Bug bug3 = Bug("High", "01.08.2022", "Unresolved", "Ustym");
    Bug bug4 = Bug("Medium", "16.01.2022", "Resolved", "Yaryna");
    bug1.print();
    bug2.print();
    bug3.print();
    bug4.print();
    cout<<"\n\n"<<endl;
    Backlog backlog;
    backlog.addBug(bug1);
    backlog.addBug(bug2);
    backlog.addBug(bug3);
    backlog.addBug(bug4);
    backlog.sortBugs();
    cout<<"\n\n"<<endl;
    backlog.find("Yulia");
}


