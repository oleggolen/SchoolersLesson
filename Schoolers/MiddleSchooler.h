#ifndef SCHOOLERS_LESSON_MIDDLE_SCHOOLER_H
#define SCHOOLERS_LESSON_MIDDLE_SCHOOLER_H
#include"Schooler.h"

class MiddleSchooler : public Schooler {
public:
    char* Study() const noexcept override;
    char* Play() const noexcept override;
    char* Smoke() const noexcept override;
    char* GetSchoolerType() const noexcept override;
    char* Tote() const noexcept override;
};


#endif
