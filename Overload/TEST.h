#ifndef _TEST_H_
#define _TEST_H_

#include "data_define.h"
#include <iostream>
using namespace std;

class TEST
{
    private:
        /* data */
    public:
        TEST();
        void overload(variantA);
        void overload(variantB);
        void overload(variantC);
        ~TEST();
};

TEST::TEST()
{
    cout << "Start Class" << endl;
}

void TEST::overload(variantA v)
{
    cout << "overload(variantA)" << endl;
}

void TEST::overload(variantB v)
{
    cout << "overload(variantB)" << endl;
}

void TEST::overload(variantC v)
{
    cout << "overload(variantC)" << endl;
}

TEST::~TEST()
{
    cout << "End Class" << endl;
}

#endif //_TEST_H_
