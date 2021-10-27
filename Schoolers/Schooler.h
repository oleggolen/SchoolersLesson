#ifndef SCHOOLERS_LESSON_SCHOOLER_H
#define SCHOOLERS_LESSON_SCHOOLER_H

class Schooler {
protected:
    Schooler();
public:
    virtual const char* Study() const noexcept =0;
    virtual const char* GetSchoolerType() const noexcept =0;
    virtual ~Schooler();
};


#endif
