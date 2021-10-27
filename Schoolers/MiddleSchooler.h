#ifndef SCHOOLERS_LESSON_MIDDLE_SCHOOLER_H
#define SCHOOLERS_LESSON_MIDDLE_SCHOOLER_H
#include"Schooler.h"
#include "../Interfaces/ISmokable.h"
#include "../Interfaces/IPlayable.h"


class MiddleSchooler : public Schooler, public ISmokable, public IPlayable  {
public:
    const char* Study() const noexcept override;
    const char* Play() const noexcept override;
    const char* Smoke() const noexcept override;
    const char* GetSchoolerType() const noexcept override;
};


#endif
