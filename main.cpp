#include <iostream>
#include <vector>
#include "Schoolers/Schooler.h"
#include "Schoolers/PrimarySchooler.h"
#include "Schoolers/MiddleSchooler.h"
#include "Schoolers/HighSchooler.h"
#include <cstring>
using namespace std;
void printInfo(const Schooler* schooler)
{
    cout << schooler->GetSchoolerType() << endl;
    cout << schooler->Study() << endl;
    cout << schooler->Play() << endl;
    cout << schooler->Smoke() << endl;
    cout << schooler->Tote() << endl;
    /*if(!strcmp(schooler->GetSchoolerType(),"I'm middle schooler"))
    {
        auto middleSchooler = (MiddleSchooler*)schooler;
        cout << middleSchooler->Play() <<
        endl << middleSchooler->Smoke() << endl;
    }
    else if(!strcmp(schooler->GetSchoolerType(),"I'm high schooler"))
    {
        auto highSchooler = (HighSchooler*)schooler;
        cout << highSchooler->Tote() <<
             endl << highSchooler->Smoke() << endl;
    }
    else if(!strcmp(schooler->GetSchoolerType(),"I'm primary schooler"))
    {
        auto primarySchooler = (PrimarySchooler*)schooler;
        cout << primarySchooler->Play() << endl;
    }*/
}
int main()
{
    PrimarySchooler primarySchooler;
    MiddleSchooler middleSchooler;
    HighSchooler highSchooler;
    vector<Schooler*> schoolers;
    schoolers.push_back(&primarySchooler);
    schoolers.push_back(&middleSchooler);
    schoolers.push_back(&highSchooler);
    for(auto schooler: schoolers) {
        printInfo(schooler);
        cout << endl;
    }

    return 0;
}
