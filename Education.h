#ifndef EDUCATION_H
#define EDUCATION_H

#include <string>

class Education {
private:
    string degree;
    string major;
    int research;

public:
    Education(string deg = "", string maj = "", int res = 0) : degree(deg), major(maj), research(res) {}
};

#endif
