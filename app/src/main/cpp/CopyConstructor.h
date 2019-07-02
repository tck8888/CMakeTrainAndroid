//
// Created by tck on 2019/7/2.
//

#ifndef CMAKETRAINANDROID_COPYCONSTRUCTOR_H
#define CMAKETRAINANDROID_COPYCONSTRUCTOR_H

class CopyConstructor {

private:
    int a;
public:
    CopyConstructor(int b);

    CopyConstructor(const CopyConstructor &c);
    ~CopyConstructor();
    void show();
};


#endif //CMAKETRAINANDROID_COPYCONSTRUCTOR_H
