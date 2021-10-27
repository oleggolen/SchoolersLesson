#ifndef SCHOOLERS_LESSON_SCHOOLER_H
#define SCHOOLERS_LESSON_SCHOOLER_H

class Schooler {
protected:
    Schooler();
public:
    virtual char* Study() const noexcept =0;
    virtual char* GetSchoolerType() const noexcept =0;
    virtual ~Schooler();
    virtual char* Play() const noexcept =0;
    virtual char* Smoke() const noexcept =0;
    virtual char* Tote() const  noexcept =0;
};


#endif
