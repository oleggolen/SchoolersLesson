#include "HighSchooler.h"
#include <iostream>
using namespace std;
char* HighSchooler::Study() const noexcept {
    return "I must study";
}

char* HighSchooler::Smoke() const noexcept {
    return  "I finish smoking";
}

char* HighSchooler::Tote() const noexcept {
    return "I create tote";
}

char* HighSchooler::GetSchoolerType() const noexcept {
    return "I'm high schooler";
}

char *HighSchooler::Play() const noexcept {
    return "I don't play anything";
}
