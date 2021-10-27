#ifndef SCHOOLERS_LESSON_PRIMARY_SCHOOLER_H
#define SCHOOLERS_LESSON_PRIMARY_SCHOOLER_H
#include"Schooler.h"
#include "../Interfaces/IPlayable.h"

class PrimarySchooler : public Schooler, public IPlayable {
public:
    const char* Study() const noexcept override;
    const char* GetSchoolerType() const noexcept override;
    const char* Play() const noexcept override;
};
#endif
