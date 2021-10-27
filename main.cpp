#include <iostream>
#include <vector>
#include "Schoolers/Schooler.h"
#include "Schoolers/PrimarySchooler.h"
#include "Schoolers/MiddleSchooler.h"
#include "Schoolers/HighSchooler.h"
#include "Schoolers/SixGradeSchooler.h"

using namespace std;
void printInfo(const Schooler* schooler)
{
    cout << schooler->GetSchoolerType() << endl;
    cout << schooler->Study() << endl;
    auto playable = dynamic_cast<const IPlayable*>(schooler);
    if(playable)
        cout << playable->Play() << endl;
    auto smokable = dynamic_cast<const ISmokable*>(schooler);
    if(smokable)
        cout << smokable->Smoke() << endl;
    auto totable = dynamic_cast<const ITotable*>(schooler);
    if(totable)
        cout << totable->Tote() << endl;
}
int main()
{
    PrimarySchooler primarySchooler;
    MiddleSchooler middleSchooler;
    HighSchooler highSchooler;
    SixGradeSchooler sixGradeSchooler;
    vector<Schooler*> schoolers;
    schoolers.push_back(&primarySchooler);
    schoolers.push_back(&middleSchooler);
    schoolers.push_back(&highSchooler);
    schoolers.push_back(&sixGradeSchooler);
    for(auto schooler: schoolers) {
        printInfo(schooler);
        cout << endl;
    }

    return 0;
}
