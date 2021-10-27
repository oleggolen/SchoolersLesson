#ifndef SCHOOLERS_LESSON_HIGH_SCHOOLER_H
#define SCHOOLERS_LESSON_HIGH_SCHOOLER_H
#include "Schooler.h"
#include "../Interfaces/ITotable.h"
#include "../Interfaces/ISmokable.h"

class HighSchooler : public Schooler, public ITotable, public ISmokable{
public:
    const char* Study() const noexcept override;
    const char* GetSchoolerType() const noexcept override;
    const char* Smoke() const noexcept override;
    const char* Tote() const noexcept override;

};


#endif
